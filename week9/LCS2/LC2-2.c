#include <stdio.h>

int main(void) {
    char a;
    scanf(" %c", &a);
    for (int i = 0; i < 20; i++) {
        printf("%c", a);
    }
    printf("\n");
    return 0;
}
