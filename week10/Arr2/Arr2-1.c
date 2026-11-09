#include <stdio.h>

int main() {
    int count[11] = {0};
    int a;

    while (scanf("%d", &a) == 1) {
        if (a < 1 || a > 10) {
            break;
        }
        count[a]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
