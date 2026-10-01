// ******************************************
// 제 목 : 행렬의 최대값과 위치
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	int arr[3][3] = { {-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25} };
	int max = arr[0][0];
	int row, col;

	for (int i = 0; i < 3; i++)
	{ 
		for (int j = 0; j < 3; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}

	printf("최대값은 %d \n", max);
	printf("위치는 %d행 %d열", row + 1, col + 1);

	return 0;
}




