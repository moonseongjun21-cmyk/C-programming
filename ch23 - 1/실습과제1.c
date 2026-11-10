// ******************************************
// 제 목 : 구조체를 이용한 출력
// 날 짜 : 2026년 11월 10일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

typedef struct student
{
	char name[10];
	int score;
	
}STUDENT;

void get_data(STUDENT arr2[]);
int get_first(STUDENT arr2[]);

int main(void)
{
	STUDENT arr[3];

	get_data(arr);
	int f = get_first(arr);

	printf("제일 앞에 나오는 이름은 %s, 점수는 %d점", arr[f].name, arr[f].score);

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

int get_first(STUDENT arr2[])
{
	int n = 0;

	for (int i = 1; i < 3; i++)
	{
		if (strcmp(arr2[n].name, arr2[i].name) > 0)
		{
			n = i;
		}
	}
	return n;
}
