// ******************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 11월 13일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct student
{
	char name[10];
	int n;
	int korean, english, math;
	double avg;
}Student;

int main(void)
{
	Student arr[3];

	for (int i = 0; i < 3; i++)
	{
		printf("이름: "); scanf("%s", arr[i].name);
		printf("학번: "); scanf("%d", &arr[i].n);
		printf("국어: "); scanf("%d", &arr[i].korean);
		printf("영어: "); scanf("%d", &arr[i].english);
		printf("수학: "); scanf("%d", &arr[i].math);
		arr[i].avg = (arr[i].korean + arr[i].english + arr[i].math) / 3;
	}

	Student high_avg = arr[0];

	for (int i = 1; i < 3; i++)
	{
		if (high_avg.avg < arr[i].avg)
		{
			high_avg = arr[i];
		}
	}
	
	printf("<최우수 학생정보> \n");
	printf("%s %d %d %d %d %.2f", high_avg.name, high_avg.n, high_avg.korean, high_avg.english, high_avg.math, high_avg.avg);
	return 0;
}
