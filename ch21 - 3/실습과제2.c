// ******************************************
// 제 목 : 문자열 길이
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

int my_string(char arr[]);
void removebsn(char arr[]);

int main(void)
{
	char str[100];

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", my_string(str), str);
	removebsn(str);
	printf("길이: %d, 내용: %s \n", my_string(str), str);

	return 0;
}

int my_string(char arr[])
{
	int cnt = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		cnt += 1;
	}
	return cnt;
}

void removebsn(char arr[])
{
	int cnt = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		cnt = i;
	}
	arr[cnt] = '\0';
}


