#include <stdio.h>

int main() {
    int num;
    int max;
    int min;
    int is_first = 1;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }

        if (is_first) {
            max = num;
            min = num;
            is_first = 0;
        } else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }

    printf("%d\n", max + min);

    return 0;
}