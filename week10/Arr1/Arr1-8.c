#include <stdio.h>

int main() {
    float score[7] = {0,85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int class1, class2;

    scanf("%d %d", &class1, &class2);
    printf("%.1f\n", score[class1] + score[class2]);

    return 0;
}