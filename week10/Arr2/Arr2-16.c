#include <stdio.h>

int main() {
    int count[11] = {0};
    int a;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }
        count[a / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%d : %d\n", i * 10, count[i]);
        }
    }

    return 0;
}
