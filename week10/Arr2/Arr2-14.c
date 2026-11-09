#include <stdio.h>

int main() {
    int a[5][5];

    for (int j = 0; j < 5; j++) {
        a[0][j] = 1;
    }
    for (int i = 0; i < 5; i++) {
        a[i][0] = 1;
    }

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
