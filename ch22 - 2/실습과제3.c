// ******************************************
// 제 목 : 구조체포인터를 이용한 출력
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct student
{
	char name[10];
	int score;
};
int main(void)
{
	struct student arr[3];
	struct student* p = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: "); scanf("%s", (p+i)->name);
		printf("성적을 입력하시오: "); scanf("%d", &(p+i)->score);
	}

	char* small = &p->name;
	int n = 0;

	for (int i = 1; i < 3; i++)
	{
		if (strcmp(small, &(p+i)->name) > 0)
		{
			small = &(p+i)->name;
			n = i;
		}
	}

	printf("\n이름은 %s, 점수는 %d점", (p+n)->name, (p+n)->score);

	return 0;
}
