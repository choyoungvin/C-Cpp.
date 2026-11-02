#include <stdio.h>

int main(void) {
    int a, score, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &score);
        sum += score;
    }
    double avg = (double)sum / a;
    printf("avg : %.1f\n", avg);
    if (avg >= 80.0) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
    return 0;
}
