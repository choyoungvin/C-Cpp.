#include <stdio.h>

int main() {
	FILE* fileptr;
	char filename[] = "example.txt"; // 저장할 파일명은 담는 문자열

	// 파일을 쓰기 모드로 열기
	fileptr = fopen(filename, "w");	// 파일이 있으면 덮어쓰고 없으면 새 파일을 생성.

	// 파일 열기에 실패했는지 확인
	if (fileptr == NULL) {
		printf("파일을 열 수 없습니다: %s\n", filename);
		return 1;	// 오류 코드 반환 후 프로그램 종료
	}

	// 파일에 문자열 쓰
	fprintf(fileptr, "Hello World!\n");

	// 파일 닫기
	fclose(fileptr);

	printf("%s 파일에 데이터를 성공적으로 썼습니다.\n", filename);

	return 0;
}
