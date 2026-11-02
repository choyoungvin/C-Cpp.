#include <stdio.h>

int main () {
    int a;
    int sum = 0;
    int count = 0;
    
    while (1) {
        scanf("%d", &a);

        if(a == 0) {
            break;
        }
        sum += a;
        count++;
    }
    double avg = (double)sum / count;

    printf("cnt = %d\nsum = %d\navg = %.2f",count,sum,avg);

    return 0;
}