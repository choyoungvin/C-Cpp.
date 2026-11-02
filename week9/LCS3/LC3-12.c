#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    int num = 1;
    char ch = 'A';
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - i; j++) {
            printf("%d ", num++);
        }
        for (int j = 0; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
