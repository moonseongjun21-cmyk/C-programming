// ********************************************
//   제  목  :  널문자를 이용해 문자열의 문자 출력
//   날  짜  :  2026년 9월 17일
//   작성자  :  2600065 문성준
// ********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[10];

	printf("문자열을 입력하시오:");
	scanf("%s", str);

	while (i < sizeof(str) / sizeof(char)) // while(str[i] != 0)
	{
		printf("%d번째문자 %c \n", i + 1, str[i]);
		i++;
	}
	return 0;
}
