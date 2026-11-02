#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i = 2; i <= a; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
