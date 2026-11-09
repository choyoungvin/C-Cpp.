#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0; // 시작 위치를 0으로 설정한다. 
    int right = size =1; // 끝 위치를 배열크기 -1 로 설정한다.

    while(left <= right) { // 시작 위치가 끝 위치보다 작거나 같은 동안 반복한다.
        
        int mid = (left + right) / 2;

        printf("%d", mid); // 중간 위치를 계산한다.
    
        if (arr[mid] == target) {
            return mid; // 중간위치를 반환하고 탐색을 종료한다. (return이 반환하고 탐색 종료를 하기 떄문에 밑에 break 쓸 필요 없음!)
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    // 반복이 종료될 때까지 찾는 값을 못찾으면 -1을 반환해라.
    }
    return -1;
}

int main() {
    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result);


