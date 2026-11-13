// ******************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 11월 13일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef union number
{
	char n[4];
	int n2;
}Number;

int main(void)
{
	Number a;

	printf("정수를 입력하시오(16진수): "); scanf("%x", &a.n2);

	printf("최상위(4번째) 바이트(16진수) : %x \n", a.n[3]);
	printf("3번째 바이트(16진수) : %x \n", a.n[2]);
	printf("2번째 바이트(16진수) : %x \n", a.n[1]);
	printf("최하위(1번째) 바이트(16진수) : %x", a.n[0]);

	return 0;
}
