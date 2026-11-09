#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int num;
    int max, min;
    int i;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        arr[count] = num;
        count++;
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}