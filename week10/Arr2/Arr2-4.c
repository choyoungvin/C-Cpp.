#include <stdio.h>

int main() {
    int count[10] = {0};
    int a;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }
        count[a / 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
