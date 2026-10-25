// ******************************************
// 제 목 : 문자 입출력 전용함수
// 날 짜 : 2026년 10월 26일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		printf("문자입력 : ");
		ch = getchar();
		getchar();
		if (ch == 'q' || ch == 'Q')
		{
			printf("종료합니다.");
			break;
		}
		printf("입력된 문자는 ");
		putchar(ch);
		printf("\n");
	}

	return 0;
}
