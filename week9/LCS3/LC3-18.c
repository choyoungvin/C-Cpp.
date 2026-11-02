#include <stdio.h>

int main(void) {
    int a, num = 1;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int j = 0; j < a - i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
