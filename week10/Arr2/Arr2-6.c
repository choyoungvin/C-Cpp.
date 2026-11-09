#include <stdio.h>

int main() {
    int a[100];

    a[0] = 100;
    scanf("%d", &a[1]);

    printf("%d %d ", a[0], a[1]);

    int i = 2;
    while (1) {
        a[i] = a[i - 2] - a[i - 1];
        printf("%d ", a[i]);
        if (a[i] < 0) {
            break;
        }
        i++;
    }
    printf("\n");

    return 0;
}
