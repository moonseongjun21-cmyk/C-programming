// ******************************************
// 제 목 : 이중 포인터 문자열 출력
// 날 짜 : 2026년 10월 6일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>

void prn_str(char** a, int b);

int main(void)
{
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };

	int count;

	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	
	prn_str(ptrarr, count);
	
	return 0;
}

void prn_str(char** a, int b)
{
	for (int i = 0; i < b; i++)
	{
		printf("%s \n", *(a + i));
	}
}
