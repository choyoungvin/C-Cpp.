#include <stdio.h>

int main () {
    int n1;
    int n2;
    int n3;

    scanf("%d %d %d", &n1,&n2,&n3);

    if (n1 > n2 && n1 > n3) {
        printf("max = %d",n1);
    }
    else if (n2 > n1 && n2 > n3) {
        printf("max = %d",n2);
    }
    else if (n3 > n1 && n3 > n2) {
        printf("max = %d",n3);
    }
    return 0;
}