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
	int n;
	double score;

	FILE* fp = fopen("result.txt", "wt");
	if (fp == NULL)
	{
		printf("파일오픈 실패!");
		return -1;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("이름,학번,학점입력: ");
		scanf("%s %d %lf", name, &n, &score);
		fprintf(fp, "%s %d %.1f \n", name, n, score);
	}
	fclose(fp);
	return 0;
}
