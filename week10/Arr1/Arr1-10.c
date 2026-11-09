#include <stdio.h>

int main() {
    int arr[10];
    int min;
    int a;

    for(a=0; a<10; a++) {
        scanf("%d", &arr[a]);
    }

    min = arr[0];

    for (a=1; a<10; a++) {
        if (arr[a] < min) {
            min = arr[a];
        }
    }

    printf("%d\n", min);
}