#include <stdio.h>


void printNumber(int n) {
    if (n < 1) {
        return;
    }

    printNumber(n-1);
    printf("%d\n", n);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printNumber(n);
    return 0;
}