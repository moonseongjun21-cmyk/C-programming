// ******************************************
// 제 목 : 문자열 덧붙이기
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct student
{
	int n;
	char name[10];
	char address[20];
};

int main(void)
{
	struct student f;

	printf("학번을 입력하시오: "); scanf("%d", &f.n);
	printf("이름을 입력하시오: "); scanf("%s", f.name);
	getchar();
	printf("주소를 입력하시오: "); fgets(f.address, sizeof(f.address), stdin);

	printf("1.학번:%d \n", f.n);
	printf("2.이름:%s \n", f.name);
	printf("3.주소:%s \n", f.address);

	return 0;
}
