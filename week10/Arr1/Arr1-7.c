#include <stdio.h>

int main () {
    int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon;

    while(1) {
        scanf("%d", &mon);
    
        if(mon > 12 || mon < 1) {
            break;
        }

        printf("%d\n", arr[mon]);
    }
    return 0;
}