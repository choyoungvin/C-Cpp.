#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;

    scanf("%d %d %d", &n1,&n2,&n3);

    if (n1 > 0 && n2 > 0 && n3 > 0) {
        printf("All Positive");
    }
    else if ( n1 == 0 || n2 == 0 || n3 == 0) {
        printf("Contain Zero");
    }
    else {
        printf("Mixed");
    }
}