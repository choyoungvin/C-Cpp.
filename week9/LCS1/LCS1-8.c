#include <stdio.h>

int main () {
    int a;
    int small = 0;
    int large = 0;

    while (1) {
        scanf("%d", &a);

        if (a>=100) {
            large++;
            break;
        }
        if (a >= 50) {
            large++;
        }
        else {
            small++;
        } 
    }
    printf("small : %d\nlarge : %d",small,large);
    return 0;
}
