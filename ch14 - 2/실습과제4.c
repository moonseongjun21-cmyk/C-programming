#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void id(int* i, double* j, double num2);

int main(void)
{
	double num, j;
	int i;

	printf("실수를 입력하시오:");
	scanf("%lf", &num);

	id(&i, &j, num);

	printf("정수부:%d \n", i);
	printf("실수부:%.5f", j);

	return 0;
}

void id(int* i, double* j, double num2)
{
	*i = (int)num2;

	*j = num2 - *i;
}
