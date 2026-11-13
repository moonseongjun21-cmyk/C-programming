// ******************************************
// 제 목 : 실습과제4
// 날 짜 : 2026년 11월 13일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef enum direct
{
	Up = 10, Down = 20, Left = 30, Right = 40	
}Direct;

void way(Direct direction);

int main(void)
{
	Direct direction;

	for (direction = Up; direction <= Right; direction += 10)
	{
		way(direction);
	}
	return 0;
}

void way(Direct direction)
{
	switch (direction)
	{
		case 10: printf("현재방향: 위 \n"); break;
		case 20: printf("현재방향: 아래 \n"); break;
		case 30: printf("현재방향: 왼쪽 \n"); break;
		case 40: printf("현재방향: 오른쪽"); break;
	}
}
