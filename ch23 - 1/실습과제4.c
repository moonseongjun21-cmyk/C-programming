// ******************************************
// 제 목 : 실습과제
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600065 문성준
// ******************************************

	#define _CRT_SECURE_NO_WARNINGS
	#pragma warning(disable:6031)
	#include <stdio.h>

	typedef struct point
	{
		int xpos;
		int ypos;
	}POINT;

	void swap_struct(POINT* p1, POINT* p2);

	int main(void)
	{
		POINT pos1 = { 1, 2 };
		POINT pos2 = { 3, 4 };
	
		printf("pos1:[%d, %d], pos2:[%d, %d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

		swap_struct(&pos1, &pos2);

		printf("pos1:[%d, %d], pos2:[%d, %d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

		return 0;
	}

	void swap_struct(POINT* p1, POINT* p2)
	{
		POINT temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
