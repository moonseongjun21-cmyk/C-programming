// ******************************************
// 제 목 : 실습과제
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char name[10];
	int n, n2, n3, ret;

	FILE* fp = fopen("input.txt", "rt");
	if (fp == NULL)
	{
		printf("파일오픈 실패!");
		return -1;
	}
	FILE* fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL)
	{
		printf("파일오픈 실패!");
		fclose(fp);
		return -1;
	}
	for (int i = 0; i < 3; i++)
	{
		ret = fscanf(fp, "%s %d %d %d", name, &n, &n2, &n3);
		if (ret == EOF)
		{
			break;
		}
		fprintf(fp2, "%s %d %.1f \n", name, n + n2 + n3, (n + n2 + n3) / 3.0);
	}
	fclose(fp);
	fclose(fp2);
	return 0;
}
