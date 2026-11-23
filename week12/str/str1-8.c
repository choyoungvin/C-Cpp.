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
    struct people p4;
        scanf("%19s", p4.name);
        scanf("%d", &p4.height);
    struct people p5;
        scanf("%19s", p5.name);
        scanf("%d", &p5.height);


    struct people min = p1;

    if (p2.height < min.height) min = p2;
    if (p3.height < min.height) min = p3;
    if (p4.height < min.height) min = p4;
    if (p5.height < min.height) min = p5;

    printf("%s %d", min.name, min.height);
}