#include <stdio.h>

int main() {
	struct Students {
		char name[50];
		int score;
	};

	// 학생 구조체 변수 선언.
	struct Students s;

	// 파일 포인터가 3개 필요함.
	FILE *fp;
	FILE *pass;
	FILE *fail;

	// 학생 수를 저장할 변수가 필요함.
	int count;

	// "students.txt" 파일을 쓰기 모드를 연다.
	fp = fopen("students.txt", "w");

	// 만약 파일 열기에 실패했다면
	if (fp == NULL) {
		// 오류 메시지 출력
		printf("파일 열기 실패");
		// 프로그램을 종료한다.
		return 1;
	}

	// 학생 수를 입력받는다.
	// ex) 학생 수 입력: 5

	printf("학생 수 입력: ");
	scanf("%d", &count);

	// 학생 수만큼 반복.
	for(int i = 0; i < count; i++) {
		// 학생 이름을 받는다.
		printf("\n%d번째 학생 이름", i+1);
		scanf("%49s", s.name);

		// 학생 점수를 받는다.
		printf("점수: ");
		scanf("%d", &s.score);

	// 이름과 점수를 students.txt 파일에 저장한다.
	fprintf(fp, "%s %d\n", s.name, s.score);

	} // 반복문 종료.

	fclose(fp);

	// students.txt 파일을 읽기모드로 연다.
	fp = fopen("students.txt", "r");

	// pass.txt 파일을 쓰기 모드로 연다.
	pass = fopen("pass.txt", "w");

	// fail.txt 파일을 쓰기 모드로 연다.
	fail = fopen("fail.txt", "w");	


	if ( fp == NULL || pass == NULL || fail == NULL) {
		// 오류 메시지를 출력한다.
		printf("파일 열기 실패\n");

		// 성공적으로 열린 파일은 닫는다.
		if (fp != NULL) fclose(fp);
		if (pass != NULL) fclose(pass);
		if (pass != NULL) fclose(fail);

		// 프로그램을 종료한다.
		return 1;
	} // 조건문 끝


	while (fscanf(fp, "%49s %d", s.name, &s.score) == 2) {
		// 만약 학생 점수가 80점 이상이라면
		if(s.score >= 80) {
			// pass.txt에 이름과 점수를 저장한다.
			fprintf(pass, "%s %d\n", s.name, s.score);
		}
		else {
			// fail.txt에 이름과 점수를 저장한다.
			fprintf(fail, "%s %d\n", s.name, s.score);
		}
	}
	fclose(fp);
	fclose(pass);
	fclose(fail);

	printf("파일 저장 및 분류 완료");
}		
