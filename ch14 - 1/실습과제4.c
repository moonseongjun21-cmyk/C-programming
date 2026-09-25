// ****************************
// 제 목 : swap 함수로 정수 교환
// 날 짜 : 2026년 9월 22일
// 작성자 : 2600065 문성준
// ****************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int swap(int* a, int* b, int* c);

int main(void)
{
	int x, y, z;

	printf("정수x를 입력 하시오:");
	scanf("%d", &x);
	
	printf("정수y를 입력 하시오:");
	scanf("%d", &y);

	printf("정수z를 입력 하시오:");
	scanf("%d", &z);

	printf("swap함수 호출 전 x=%d y=%d z=%d \n", x, y, z);

	swap(&x, &y, &z);
	printf("swap함수 호출 후 x=%d y=%d z=%d", x, y, z);

	return 0;
}

int swap(int* a, int* b, int* c)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *c;
	*c = tmp;
}
