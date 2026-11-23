#include <stdio.h>


struct person {
    char name[20];
    char school[20];
    int grade;
};

int main() {
    struct person p;
    scanf("%19s", p.name);
    scanf("%19s", p.school);
    scanf("%d", &p.grade);

    printf("Name : %s\nSchool : %s\nGrade : %d", p.name,p.school,p.grade);

}