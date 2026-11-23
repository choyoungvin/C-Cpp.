#include <stdio.h>

struct people {
    char name[20];
    int score;
};

int main() {
    struct people p1;
        scanf("%19s", p1.name);
        scanf("%d", &p1.score);
    struct people p2;
        scanf("%19s", p2.name);
        scanf("%d", &p2.score);
    struct people p3;
        scanf("%19s", p3.name);
        scanf("%d", &p3.score);
    struct people p4;
        scanf("%19s", p4.name);
        scanf("%d", &p4.score);
    struct people p5;
        scanf("%19s", p5.name);
        scanf("%d", &p5.score);


    struct people max = p1;

    if (p2.score > max.score) max = p2;
    if (p3.score > max.score) max = p3;
    if (p4.score > max.score) max = p4;
    if (p5.score > max.score) max = p5;

    printf("%s %d", max.name, max.score);
}