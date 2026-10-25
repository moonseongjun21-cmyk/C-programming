// ******************************************
// 제 목 : 문자열 입출력 전용함수
// 날 짜 : 2026년 10월 26일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	int str[3][20];

	printf("이름: ");
	gets(str[0]);
	printf("주소: ");
	gets(str[1]);
	printf("자동차번호: ");
	gets(str[2]);

	printf("<결과출력> \n");
	
	printf("이름: ");
	puts(str[0]);
	printf("주소: ");
	puts(str[1]);
	printf("자동차번호: ");
	puts(str[2]);
	
	return 0;
}
