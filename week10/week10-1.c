#include <stdio.h>
#include <ctype.h>

int main () {

    char ch = 'M'; // 이 예제에서 검사할 문자
    printf("문자: %c\n", ch); // ch가 가르키는 문자 1개만 출력(%c).

    // 밑에는 문자처리함수 + 조건연산자(?)를 이용해서 예, 아니오를 출력
    
    printf("알바펫 여부: %s\n", isalpha(ch) ? "예":"아니오"); //isalpah를 통해 ch가 알바펫인지 판별
    
    printf("대문자 여부: %s\n", issupper(ch) ? "예":"아니오"); // issupper를 통해 ch가 대문자인지 판별
   
    printf("소문자 여부: %s\n", islower(ch) ? "예":"아니오"); // islower를 통해 ch가 소문자인지 판별
   
    printf("숫자 여부: %s\n", isdigit(ch) ? "예":"아니오"); // isdigit을 통해 ch가 숫자인지 아닌지 판별
   
    printf("알파벳 또는 숫자 여부: %s\n", isalnum(ch) ? "예":"아니오"); // isalnum을 통해 ch가 숫자 또는 알파벳인지 판별
   
    printf("16진수 숫자 여부: %s\n", isxdigit(ch) ? "예":"아니오"); // isxdigit을 통해서 16진수 숫자에 포함되는 문자인지 판별
   
    printf("구두점 문자 여부: %s\n", ispunch(ch) ? "예":"아니오"); // ispunch를 통해서 구두점 문자인지 아닌지 판별 
   
    printf("인쇄 가능 문자 여부: %s\n", isprint(ch) ? "예":"아니오"); // isprint를 통해서 ch가 프린터블 문자인지 확인
   
    printf("제어 문자 여부: %s\n", iscntrl(ch) ? "예":"아니오"); // iscntrl를 통해 제어 가능한 문자인지 판별
   
    printf("아스키 문자 여부: %s\n", isascii(ch) ? "예":"아니오"); // isascii를 통해서 아스키문자 집합에 포함되는지 확인.

    return 0;
}