#include <stdio.h>

int main() {
    int a;
    int arr[100];
    int max;
    int i;

    scanf("%d", &a);
    
    for (i=0; i < a; i++) {
        scanf("%d", &arr[i]);    
    }

    max = arr[0];
    for (i=1; i<a; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d\n", max);

    return 0;
}