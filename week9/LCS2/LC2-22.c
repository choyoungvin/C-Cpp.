#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int start = a < b ? a : b;
    int end = a > b ? a : b;
    int sum = 0, cnt = 0;
    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            cnt++;
        }
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / cnt);
    return 0;
}
