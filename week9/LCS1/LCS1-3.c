#include <stdio.h>

int main () {
    int num;
    int sum=0;

    scanf("%d", &num);

    while (num<=10) {
        sum += num;
        num++;
    }
        printf("sum = %d\n", sum);
        printf("num = %d", num);
}