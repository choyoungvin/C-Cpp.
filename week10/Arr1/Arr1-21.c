#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int num;
    int i;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        arr[count] = num;
        count++;
    }

    printf("%d\n", count);

    for (i = 0; i < count; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i] * 2);
        } else {
            printf("%d ", arr[i] / 2);
        }
    }
    printf("\n");

    return 0;
}