#include <stdio.h>

int main () {
    int a;
    int i=1;
    int sum = 0;

    scanf("%d", &a);

    while (i<=a) {
        sum += i;
        i++;
    }
    printf("%d", sum);
}