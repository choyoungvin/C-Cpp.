#include <stdio.h>

int main () {
    int num;

    printf("1. ADD\n2. EDIT\n3. DEL\n");
    scanf("%d", &num);

    if (num == 1) {
        printf("You selected ADD.");
    }
    else if (num == 2) {
        printf("You selected EDIT.");
    }
    else if (num == 3) {
        printf("You selected DEL.");
    }
    else {
        printf("Wrong choice.");
    }
}