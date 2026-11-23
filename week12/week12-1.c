#include <stdio.h>

// 구조체를 선언
// 이름, 나이

struct Person {
        char name[30];
        int age;
};

int main() {
    // 구조체를 제어할 p 인스턴스
    struct Person p;
    scanf("%29s", p.name);
    scanf("%d", &p.age);


    printf("Your name is %s and you are %d years old.", p.name, p.age);

}