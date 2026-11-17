// ******************************************
// 제 목 : 실습과제
// 날 짜 : 2026년 11월 17일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char t[100], t2[100];
	int ch;

	printf("복사할 파일명 : ");
	scanf("%s", t);

	printf("복사받을 파일명 : ");
	scanf("%s", t2);

	FILE* fp = fopen(t, "rt");
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	FILE* fp2 = fopen(t2, "wt");
	if (fp2 == NULL)
	{
		puts("파일오픈 실패!");
		fclose(fp);
		return -1;
	}
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		fputc(ch, fp2);
	}
	fclose(fp);
	fclose(fp2);

	return 0;
}
