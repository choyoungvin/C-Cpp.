#include <stdio.h>

int main () {
    int a;

    while(1) {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
        scanf("%d", &a);

        if (a==1) {
            printf("\nSeoul\n\n");
        }
        else if (a==2) {
            printf("\nWashington\n\n");
        }
        else if (a==3) {
            printf("\nTokyo\n\n");
        }
        else if (a==4) {
            printf("\nBeijing\n\n");
        }
        else {
            printf("\nnone\n");
            break;
        }
    }
    return 0;
}