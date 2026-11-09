#include <stdio.h>

int main() {
    int score[10];
    int sum = 0;
    int i;
    double avg;

    for (i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    avg = (double)sum / 10.0;

    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", avg);

    return 0;
}