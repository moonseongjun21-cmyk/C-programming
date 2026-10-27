// ******************************************
// 제 목 : 실습과제4.c
// 날 짜 : 2026년 10월 26일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char str[20];
	int i = 0;
	
	printf("문자열입력:");
	fgets(str, sizeof(str), stdin);
	
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
		i++;
	}
	// 배열에서 ‘\n’을 널문자(‘\0’)로 변환
	printf("%s", str);
	
	return 0;
}
