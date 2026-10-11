// ******************************************
// 제 목  : 버퍼 입출력
// 날 짜  : 2026년 10월 11일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char c;
	while (1)
	{
		printf("문자 입력: ");
		scanf(" %c", &c);

		if (c == 'q' || c == 'Q')
		{
			break;
		}

		printf("입력된 문자는 %c \n", c);
	}

	return 0;
}

