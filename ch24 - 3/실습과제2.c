// ******************************************
// 제 목 : 실습과제
// 날 짜 : 2026년 11월 25일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	FILE* src = fopen("b.bin", "rb");
	
	if (src == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	
	int arr[10];

	fread(&arr, sizeof(int), 10, src);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", arr[i]);
	}

	fclose(src);
	return 0;
}
