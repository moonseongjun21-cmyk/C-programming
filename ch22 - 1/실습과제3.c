// ******************************************
// 제 목 : 구조체를 이용한 출력
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct car
{
	char m[10];
	char n[10];
	int dis;
};

int main(void)
{
	struct car f;

	printf("모델을 입력하시오: "); scanf("%s", f.m);
	getchar();
	printf("번호판을 입력하시오: "); scanf("%s", &f.n);
	printf("주행거리를 입력하시오 : "); scanf("%d", &f.dis);
	
	printf("\n1.모델: %s \n", f.m);
	printf("2.번호판: %s \n", f.n);
	printf("3.주행거리: %d km \n", f.dis);

	return 0;
}
