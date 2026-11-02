#include <stdio.h>

int main(void) {
    int a, val, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%.2f\n", (double)sum / a);
    return 0;
}
