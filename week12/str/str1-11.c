#include <stdio.h>

struct Point {
    double x;
    double y;
};

int main() {
    struct Point p1, p2, mid;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;

    printf("Center point = (%.1f, %.1f)\n", mid.x, mid.y);

    return 0;
}
