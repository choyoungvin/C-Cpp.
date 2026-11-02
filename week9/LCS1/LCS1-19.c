#include <stdio.h>

int main(void) {
    int width, height;
    char ch;

    while (1) {
        scanf("%d %d", &width, &height);

        printf("Triangle area = %.1f\n", (double)(width * height) / 2.0);

        printf("Continue? ");
        scanf(" %c", &ch);

        if (ch != 'Y' && ch != 'y') {
            break;
        }
    }

    return 0;
}