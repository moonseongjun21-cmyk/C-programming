// ******************************************
// 제 목 : 문자열 사전비교
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[5][10];

	for (int i = 0; i < 5; i++)
	{
		printf("문자열 입력 : ");
		scanf("%s", &arr[i]);
	}

	char* small = arr[0];	
	char* big = arr[0];

	for (int i = 1; i < 5; i++)
	{
		if (strcmp(small, arr[i]) > 0)
		{
			small = arr[i];
		}
	}
	for (int i = 1; i < 5; i++)
	{
		if (strcmp(big, arr[i]) < 0)
		{
			big = arr[i];
		}
	}

	printf("제일 앞 : %s \n", small);
	printf("제일 뒤 : %s", big);

	return 0;
}
