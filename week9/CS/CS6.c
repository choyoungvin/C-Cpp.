#include <stdio.h>

int main() {
    int age = 0;

    scanf("%d", &age);

    if (age<20) {
        printf("%d years later",20-age);
    }
    else {
        printf("adult");
    }
    return 0;
}