// ******************************************
// 제 목 : 문자열 덧붙이기
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

void my_strcat(char arr1[], char arr2[]);

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";

	my_strcat(str1, str2);
	puts(str1);

	return 0;
}

void my_strcat(char arr1[], char arr2[])
{	
	int i = 0;
	while (arr1[i] != '\0')
	{
		i++;
	}
	
	int j = 0;
	while(arr2[j] != '\0')
	{
		arr1[i] = arr2[j];
		i++;
		j++;
	}
	arr1[i] = '\0';
}
