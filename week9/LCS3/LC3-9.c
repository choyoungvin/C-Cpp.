#include <stdio.h>

int main(void) {
    int a, num = 1;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
