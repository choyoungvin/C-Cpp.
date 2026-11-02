#include <stdio.h>

int main() {
    int a = 0;

    scanf("%d", &a);
    printf("%d",a);

    if (a<0) {
        printf("\nminus");
    }
    return 0;
}