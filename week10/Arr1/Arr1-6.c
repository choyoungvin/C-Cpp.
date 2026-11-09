#include <stdio.h>

int main () {
    int arr[100];
    int count = 0;
    int i;

    for ( i=0; i<100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        count ++;
    }

    for(i=count -1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}