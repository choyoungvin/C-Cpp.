#include <stdio.h>
#include <math.h>

int main() {
    int a[5][4];

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        printf("%d %.1f\n", sum, round((double)sum / 4.0 * 10) / 10.0);
    }

    return 0;
}
