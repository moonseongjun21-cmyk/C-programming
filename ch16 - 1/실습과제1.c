// ******************************************
// 제 목 : 행렬 계산
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	int arr1[2][2] = { {2, 4}, {5, -5} };
	int arr2[2][2] = { {-2, 3}, {0, -5} };
	int arr3[2][2];

	printf("실행결과:\n");

	for(int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ", *(*(arr3+i)+j));
		}
		printf("\n");
	}

	return 0;
}

