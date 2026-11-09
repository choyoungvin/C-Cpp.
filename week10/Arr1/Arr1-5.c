#include <stdio.h>

int main () {
    int arr[100];
    int count = 0;
    int num;
    int i;


    for(i=0; i<100; i++) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        arr[count] = num;
        count ++;
    }

    for (i=1; i < count; i+=2) {
        printf("%d ",arr[i]);
    }
    return 0;
}