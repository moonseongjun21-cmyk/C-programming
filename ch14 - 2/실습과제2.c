// ******************************************
// 제 목 : 최대값 구하기
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int get_max(int* array, int n);

int main(void)
{
	int grade[5];
	int i, max;
	
	for (i = 0; i < 5; i++)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}
	
	max = get_max(grade, 5);
	printf("최대값은 %d입니다. \n", max);
	
	return 0;
}

int get_max(int* array, int n)
{
	int i, max;
	
	max = *array;
	
	for (i = 0; i < n; i++)
	{
		if (*(array + i) > max)
		{
			max = *(array + i);

		}
	}

	return max;
}
