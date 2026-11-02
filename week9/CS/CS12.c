#include <stdio.h>

int main () {
    int n1;
    
    scanf("%d", &n1);

    if (n1 % 2 == 0 && n1 > 0) {
        printf("Even Number");
    }
    else if (n1 % 2 == 1 && n1 > 0) {
        printf("Odd Number");
    }
    else if (n1 < 0) {
        printf("Non positive");
    }
    return 0;
}
