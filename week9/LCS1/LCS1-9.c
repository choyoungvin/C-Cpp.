#include <stdio.h>

int main () {
    int a;
    int max = 0;
    int min = 101;

    while(1) {
        scanf("%d", &a);
        if (a==0) {
            break;
        }
        if ( a >= 1 && a <= 100) {
            if (a > max) {
                max = a;
            }
            if (a < min) {
                min = a;
            }
        }
    }
    printf("MAX = %d\n",max);
    printf("MIN = %d\n",min);
}
