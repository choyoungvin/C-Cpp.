#include <stdio.h>

void selectionSort(int arr[], int n) {
    // 맨 앞자리부터 시작해서 마지막 바로 전 자리까지 기준을 잡음
    for (int i = 0; i < n - 1; i++) {
        
        int minIdx = i; // 'i'번 자리가 일단 제일 작을 것이라고 임시로 정해둠

        // 'i' 다음 위치부터 배열 끝까지 훑어보면서 진짜 제일 작은 숫자를 찾습니다.
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) { 
                minIdx = j; // 임시 최솟값보다 더 작은 숫자를 발견하면, 그 위치(index)를 기억합니다.
            }
        }

        // 진짜 가장 작은 숫자를 찾았으니, 기준 자리(i)에 있던 숫자와 서로 자리를 교환
        if (minIdx != i) { // 자기 자신이 최솟값이 아니었다면 교환.
            int temp = arr[i];     // 원래 자리에 있던 숫자를 잠깐 보관 상자(temp)에 넣어둡니다.
            arr[i] = arr[minIdx];  // 제일 작은 숫자를 원래 자리로 옮깁니다.
            arr[minIdx] = temp;    // 보관 상자에 있던 숫자를 최솟값이 있던 빈자리로 보냅니다.
        }
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

    
    printf("=== 선택 정렬 ===\n");
    printf("정렬 전: ");
    printArray(arr, n);

    
    selectionSort(arr, n);

    
    printf("정렬 후: ");
    printArray(arr, n);

    return 0; 
}