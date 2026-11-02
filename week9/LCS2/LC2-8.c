#include <stdio.h>

int main(void) {
    int a, sum = 0;
    scanf("%d", &a);
    for (int i = a; i <= 100; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
