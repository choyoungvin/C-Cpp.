#include <stdio.h>

int main(void) {
    int a = 50;
    scanf("%d", &a);

    if (a >= 80) {
        a += 10;
    } else {
        a -= 5;
    }
    a--;

    int A = 50;
    int B = 75;
    int C = 70;

    printf("%d %d %d\n", A, B, C);
    return 0;
}