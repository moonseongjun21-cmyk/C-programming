// ******************************************
// 제 목 : 배열과 함수로 정수 저장
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void get_data(int* a);

int main(void)
{

	int i, data[5];

	get_data(data);

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 data:%d\n", i + 1, data[i]);
	}

	return 0;
}

void get_data(int* a)
{
	for (int b = 0; b < 5; b++)
	{
		printf("%d번째 data를 입력하시오:", b + 1);
		scanf("%d", &a[b]);
	}
}
