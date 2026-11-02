#include <stdio.h>

int main (void) {
    int a;

    while(1) {
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\nEnter number: ");
        fflush(stdout);
        scanf("%d", &a);

        if ( a==1 ) {
            printf("\nYou selected Input.\n\n");
        }
        else if ( a==2 ) {
            printf("\nYou selected Output.\n\n");
        }
        else if ( a==3 ) {
            printf("\nYou selected Delete.\n\n");
        }
        else if ( a==4 ) {
            printf("\nYou selected Finish.\n\n");
            break;
        }
        else {
            printf("\nWrong input.\n\n");
        }
    }
    return 0;
}