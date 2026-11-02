#include <stdio.h>

int main (void) {
    int a;
    int sum = 0;
    int count = 0;
    
    while (1) {
        scanf("%d", &a);

        if (a < 0  || a > 100) {
            break;
        }
        sum += a;
        count++;
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum/count);

    return 0;
}