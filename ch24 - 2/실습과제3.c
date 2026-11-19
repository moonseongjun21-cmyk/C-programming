// ******************************************
// 제 목 : 실습과제
// 날 짜 : 2026년 11월 19일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct student
{
	char name[10];
	int n, n2, n3, total;
}Student;
int main(void)
{
	Student arr[3];
	int ret;

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
		fscanf(fp, "%s %d %d %d", arr[i].name, &arr[i].n, &arr[i].n2, &arr[i].n3);
		arr[i].total = arr[i].n + arr[i].n2 + arr[i].n3;
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (arr[i].total < arr[j].total)
			{
				Student temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		fprintf(fp2, "%d등: %s %d %.1f \n", i + 1, arr[i].name, arr[i].total, arr[i].total / 3.0);
	}

	fclose(fp);
	fclose(fp2);
	return 0;
}
