// ******************************************
// 제 목 : 구조체를 이용한 출력
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;

	printf("좌측 상단의 좌표 입력: "); scanf("%d %d", &p1.x, &p1.y);
	printf("우측 하단의 좌표 입력: "); scanf("%d %d", &p2.x, &p2.y);

	if (p2.x - p1.x < 0)
	{
		int value = -(p2.x - p1.x);
		printf("사각형의 폭: %d \n", value);
	}
	else
	{
		printf("사각형의 폭: %d \n", p2.x - p1.x);
	}
	
	if (p1.y - p2.y < 0)
	{
		int value = -(p1.y - p2.y);
		printf("사각형의 높이: %d \n", value);
	}
	else
	{
		printf("사각형의 높이: %d \n", p1.y - p2.y);
	}

	return 0;
}

