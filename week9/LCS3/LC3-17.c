#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    char ch = 'A';
    int num = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 0; j < i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
