#include <stdio.h>

int main(void) {
    int a;
    int odd = 0;
    int even = 0;

    while (1) {
        scanf("%d", &a);

        if (a == 0) {
            break;
        }

        if (a % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}