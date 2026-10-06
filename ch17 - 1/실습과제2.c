// ******************************************
// 제 목 : 이중포인터 최대값
// 날 짜 : 2026년 10월 6일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int get_max(int** a, int b);

int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;

	int* ptrarr[3] = { &num1, &num2, &num3 };
	
	int max;

	max = get_max(ptrarr, 3); 
	
	printf("최댓값:%d\n", max);
	
	return 0;
}

int get_max(int** a, int b)
{
	int max = *a[0];

	for (int i = 1; i < b; i++)
	{
		if (max < *a[i])
		{
			max = *a[i];
		}
	}

	return max;
}


























