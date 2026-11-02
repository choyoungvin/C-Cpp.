#include <stdio.h>

int main(void) {
    int a;
    int i = 1;

    scanf("%d", &a);

    // 1부터 n까지 반복하며 출력
    while (i <= a) {
        printf("%d ", i);
        i++;
    }

    return 0;
}