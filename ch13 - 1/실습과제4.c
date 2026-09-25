// ****************************
//   제목 : 교재 299p 문제1 변형
//   날짜 : 2026년 9월 10일
//   작성자 : 2600065 문성준
// ****************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	int arr[5];
	int* ptr = arr;
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &(ptr[i]));
		*(ptr + i) += 2;
		printf("2씩 증가된 결과:%d \n", *(ptr + i));
	}

	return 0;
}
