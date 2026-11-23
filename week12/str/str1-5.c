#include <stdio.h>

struct people {
    char name[20];
    int age;
};

int main() {
    struct people p1;
        scanf("%19s", p1.name);
        scanf("%d", &p1.age);
    struct people p2;
        scanf("%19s", p2.name);
        scanf("%d", &p2.age);
    struct people p3;
        scanf("%19s", p3.name);
        scanf("%d", &p3.age);

    printf("Name : %s\n", p1.name);
    printf("Age  : %d\n", p1.age);
    printf("Name : %s\n", p2.name);
    printf("Age  : %d\n", p2.age);
    printf("Name : %s\n", p3.name);
    printf("Age  : %d\n", p3.age);
}