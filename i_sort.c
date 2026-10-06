#include <stdio.h>

void insertionSort(int arr[], int n) {
    // 0번 카드는 이미 놓여있다고 치고, 1번 카드(두 번째)부터 끝까지 순서대로 정렬
    for (int i = 1; i < n; i++) {
        
        int key = arr[i]; // 어느 자리로 정렬할 지 생각하고 들고 있는 숫자.
        int j = i - 1;    // 내 바로 왼쪽에 있는 카드 위치부터 비교 시작

        // 내 왼쪽에 있는 숫자가 들고 있는 숫자와 비교했을 때 더 크다면, 그 카드를 오른쪽으로 밀기.
        // - j >= 0 : 맨 왼쪽 끝(배열 시작)을 넘어가기 전까지만 검사
        // - arr[j] > key : 왼쪽 카드가 내가 쥐고 있는 카드(key)보다 더 크다면?
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 왼쪽 숫자를 오른쪽 공간(j+1)으로 한 칸 미루기
            j--;                 // 그보다 더 왼쪽에 또 숫자가 있는지 확인하려고 왼쪽으로 이동
        }

        // 나보다 큰 숫자를 다 오른쪽으로 치웠으니, 비어있는 그 자리(j + 1)에 들고 있는 숫자 집어 넣기
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 
}

int main() {
    
    int arr[] = {64, 25, 12, 22, 11};

    
    int n = sizeof(arr) / sizeof(arr[0]);

   
    printf("=== 삽입 정렬 ===\n");
    printf("정렬 전: ");
    printArray(arr, n);

   
    insertionSort(arr, n);

    printf("정렬 후: ");
    printArray(arr, n);

    return 0;
}