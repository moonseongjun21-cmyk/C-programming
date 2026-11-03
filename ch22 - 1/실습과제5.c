// ******************************************
// 제 목 : 문자열 덧붙이기
// 날 짜 : 2026년 10월 29일
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
	struct point p1 = { 10, 10 }, p2 = { 20, 20 };

	printf("교환전 p1의 좌표: (%d, %d) \n", p1.x, p1.y);
	printf("교환전 p2의 좌표: (%d, %d) \n", p2.x, p2.y);
	
	struct point p3;
	p3 = p1;
	p1 = p2;
	p2 = p3;

	printf("교환후 p1의 좌표: (%d, %d) \n", p1.x, p1.y);
	printf("교환후 p2의 좌표: (%d, %d) \n", p2.x, p2.y);

	return 0;
}
