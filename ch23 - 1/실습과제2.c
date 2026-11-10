// ******************************************
// 제 목 : 실습과제
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

typedef struct student
{
	char name[10];
	int score;
}STUDENT;

void get_data(STUDENT arr2[]);
STUDENT get_best(STUDENT* arr2[]);

int main(void)
{
	STUDENT arr[3];

	get_data(arr);
	STUDENT b = get_best(arr);

	printf("최우수학생의 이름은 %s, 점수는 %d", b.name, b.score);

	return 0;
}

void get_data(STUDENT arr2[])
{
	for (int i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: "); scanf("%s", arr2[i].name);
		printf("성적을 입력하시오: "); scanf("%d", &arr2[i].score);
	}
}

STUDENT get_best(STUDENT arr2[])
{
	STUDENT n = arr2[0];

	for (int i = 1; i < 3; i++)
	{
		if (n.score < arr2[i].score)
		{
			n = arr2[i];
		}
	}
	return n;
}
