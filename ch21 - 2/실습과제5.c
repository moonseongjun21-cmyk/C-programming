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
	char str[20];
	int i = 0, cnt = 0;

	printf("문자열입력: ");
	gets(str);

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			cnt += 1;
		}
		i++;
	}

	printf("단어수 : %d", cnt + 1);

	return 0;
}
