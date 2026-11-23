#include <stdio.h>

struct Person {
    char name[105];
    char tel[105];
    char addr[105];
};

int main() {
    struct Person p;

    scanf("%s %s %s", p.name, p.tel, p.addr);

    printf("name : %s\n", p.name);
    printf("tel : %s\n", p.tel);
    printf("addr : %s\n", p.addr);

    return 0;
}
