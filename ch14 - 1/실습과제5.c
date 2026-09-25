// **************************************************
// 제 목 : Call-By-Value와 Call-By-Reference로 값 출력
// 날 짜 : 2026년 9월 22일
// 작성자 : 2600065 문성준
// **************************************************

// Call-by-value

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int SquareByValue(int num2);

int main(void)
{
	int num = 2;
	printf("num:%d \n", num);

	num = SquareByValue(num);
	printf("함수 호출 후 num:%d", num);

	return 0;
}

int SquareByValue(int num2)
{
	num2 = 100 * num2;

	return num2;
}

// Call-by-reference

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int SquareByReference(int* num2);

int main(void)
{
	int num = 2;
	printf("num:%d \n", num);

	SquareByReference(&num);
	printf("함수 호출 후 num:%d", num);

	return 0;
}

int SquareByReference(int* num2)
{
	*num2 *= 100;
}
