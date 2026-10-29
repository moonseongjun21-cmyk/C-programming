// ******************************************
// 제 목 : 문자열 복사
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

void my_strcpy(char arr2[], char arr1[]);

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];

	my_strcpy(str2, str1);
	puts(str1);
	puts(str2);

	return 0;
}

void my_strcpy(char arr2[], char arr1[])
{
	int i = 0;

	while (arr1[i] != '\0')
	{
		arr2[i] = arr1[i];
		i++;
	}
	arr2[i] = '\0';
}
