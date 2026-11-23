#include <stdio.h>

struct school {
    char name[20];
    int grade;
};

int main() {
    struct school one = {"Jejuelementary", 6};
    struct school two;
        scanf("%19s", two.name);
        scanf("%d", &two.grade);
    
    printf("%d grade in %s School\n", one.grade, one.name);
    printf("%d grade in %s School\n", two.grade, two.name);
}
