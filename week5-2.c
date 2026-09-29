#include <stdio.h>

int main() {
    int counts[7] = {0}; 
    int dice;

    printf("주사위 눈금 10개를 입력하세요 (1~6 사이의 숫자):\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &dice);

        if (dice >= 1 && dice <= 6) {
            counts[dice]++; 
        } else {
            printf("잘못된 입력입니다. 1~6 사이의 숫자만 입력하세요.\n");
            i--;
        }
    }

    printf("\n--- 주사위 결과 (총 10회) ---\n");
    for (int i = 1; i <= 6; i++) {
        printf("숫자 %d: %d번\n", i, counts[i]);
    }

    return 0;
}