#include <stdio.h>

int main(void) {
    int a, sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / 5);
    return 0;
}
