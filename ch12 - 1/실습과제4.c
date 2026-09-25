// ************************
// 제 목 : 변수들의 주소 출력
// 날 짜 : 2026년 9월 3일
// 작성자 : 2600065 문성준
// ************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char a = 'A';
	int b = 36;
	double c = 3.141592;

	printf("char형 변수a의주소 : %p \n", &a);
	printf("int형 변수b의주소 : %p \n", &b);
	printf("double형 변수c의주소 : %p", &c);

	return 0;
}




