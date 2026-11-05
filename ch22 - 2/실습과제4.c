// ******************************************
// 제 목 : 구조체를 이용한 직각삼각형 판별
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct point
{
	int x, y;
};

struct triangle
{
	struct point a, b, c;
};

int main(void)
{
	struct triangle t;

	printf("1번째 점 (x,y) 입력: "); scanf("%d %d", &t.a.x, &t.a.y);
	printf("2번째 점 (x,y) 입력: "); scanf("%d %d", &t.b.x, &t.b.y);
	printf("3번째 점 (x,y) 입력: "); scanf("%d %d", &t.c.x, &t.c.y);

	int ab = (t.a.x - t.b.x) * (t.a.x - t.b.x) + (t.a.y - t.b.y) * (t.a.y - t.b.y);
	int bc = (t.b.x - t.c.x) * (t.b.x - t.c.x) + (t.b.y - t.c.y) * (t.b.y - t.c.y);
	int ac = (t.a.x - t.c.x) * (t.a.x - t.c.x) + (t.a.y - t.c.y) * (t.a.y - t.c.y);

	if (ab == bc + ac || bc == ab + ac || ac == ab + bc)
	{
		printf("삼각형은 직각삼각형임");
	}
	else
	{
		printf("삼각형은 직각삼각형 아님");
	}

	return 0;
}
