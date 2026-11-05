// ******************************************
// 제 목 : 구조체포인터로 변형
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee arr[3];
	struct employee* p = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("이름: "); scanf("%s", (arr+i)->name);
		printf("주민번호: "); scanf("%s", (arr+i)->pid);
		printf("급여: "); scanf("%d", &(arr+i)->salary);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("이름: %s \n", (arr+i)->name);
		printf("주민번호: %s \n", (arr+i)->pid);
		printf("급여: %d \n", (arr+i)->salary);
	}
	return 0;
}
