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
	int n;
	char address[30];
}STUDENT;

void get_data(STUDENT* p);
void put_data(STUDENT* p);

int main(void)
{
	STUDENT person;

	get_data(&person);
	put_data(&person);

	return 0;
}

void get_data(STUDENT* p)
{
	printf("이름을 입력하시오: "); scanf("%s", p->name);
	printf("학번을 입력하시오: "); scanf("%d", &p->n);
	getchar();
	printf("주소를 입력하시오: "); fgets(p->address, sizeof(p->address), stdin);
}

void put_data(STUDENT* p)
{
	printf("\n1.이름:%s \n", p->name);
	printf("2.학번:%d \n", p->n);
	printf("3.주소:%s", p->address);
}
