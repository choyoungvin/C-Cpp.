#include <stdio.h>

struct people {
    char name[20];
    int height;
};

int main() {
    struct people p1;
        scanf("%19s", p1.name);
        scanf("%d", &p1.height);
    struct people p2;
        scanf("%19s", p2.name);
        scanf("%d", &p2.height);
    struct people p3;
        scanf("%19s", p3.name);
        scanf("%d", &p3.height);

    printf("%s : %dcm\n", p1.name, p1.height);
    printf("%s : %dcm\n", p2.name, p2.height);
    printf("%s : %dcm\n", p3.name, p3.height);
}