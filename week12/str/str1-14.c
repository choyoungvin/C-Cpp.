#include <stdio.h>
#include <string.h>

struct Person {
    char name[105];
    char tel[105];
    char addr[105];
};

int main() {
    struct Person p[3];
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%s %s %s", p[i].name, p[i].tel, p[i].addr);
    }

    int min_idx = 0;
    for (i = 1; i < 3; i++) {
        if (strcmp(p[i].name, p[min_idx].name) < 0) {
            min_idx = i;
        }
    }

    printf("name : %s\n", p[min_idx].name);
    printf("tel : %s\n", p[min_idx].tel);
    printf("addr : %s\n", p[min_idx].addr);

    return 0;
}
