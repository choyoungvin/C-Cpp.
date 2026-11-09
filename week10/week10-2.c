#include <stdio.h>
#include <string.h>

int main () {
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];      // 여기까지 최대 20문자 담을 수 있는 문자열 배열 3개 생성

    char ch = 'p'; // 변수 ch에 'p' 문자 저장.
    int n = 3;  // 부분 복사/비교에 사용할 개수(3개)를 지정.

    int len = strlen(str1); // len이라는 변수 생성하고 여기에 str1 문자열의 길이값을 넣음.
    printf("str1의 길이: %d\n", len); // len = str1문자열의 길이 값을 출력 -> 4가 출력됨.

    strcpy(str3, str1); // str1의 값을 str3에 복사함.
    printf("str1을 str3에 복사: %s\n", str3);

    strncpy(str3,str2,n); // str2에서 앞 3개 문자를 str3에 복사
    str3[n] = '\0'; // str2에서 앞 3글자만 복사하면 널 문자가 없을 수 있기 때문에 str3에 따로 널문자 넣어서 문자열 완성.
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    printf("str1과 str2 비교: %d\n", strcmp(str1,str2)); // str1과 str2의 알파벳순서(아스키코드) 비교 ('B'가 'S'보다 앞서 있어서 음수 반환)

    printf("str1과 str2의 첫 %d 문자 비교: %d\n", n, strncmp(str1,str2,n)); // str1과 str2의 앞 3문자 비교. ("Bac" vs "Spa")

    strcat(str1,str2);
    printf("str2를 str1에 연결: %s\n", str1); // str2를 str1의 끝에 연결 -> BackSpace 로 str1이 바뀜.

    char* ptr_str = strstr(str1,str2);
    printf("str1에서 str2의 첫 번째 출현: %s\n", ptr_str ? ptr_str : "찾을 수 없음"); 
    // str1에서 str2의 시작하는 위치를 잡음.
    // BackSpace에서 Space가 시작하는 위치찾아서 찾으면 찾은위치에서부터 Space를
    // 못찾았으면 "찾을 수 없음" 출력

    return 0;
}