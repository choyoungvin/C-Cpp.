#include <stdio.h>

struct people {
    char name[10];
    int age;
};

int main() {
    struct people me = {"Yejun", 12};

    struct people you;
    scanf("%9s", you.name);
    scanf("%d", &you.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", you.name, you.age);

}