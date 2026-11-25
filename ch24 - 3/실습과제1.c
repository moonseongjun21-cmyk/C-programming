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
	FILE* src = fopen("a.txt", "r");
	FILE* src2 = fopen("b.bin", "wb");

	if (src == NULL || src2 == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	
	int ret, num;

	while (1)
	{
		ret = fscanf(src, "%d", &num);
		if (ret == EOF)
		{
			break;
		}
		fwrite(&num, sizeof(int), 1, src2);
	}

	fclose(src);
	fclose(src2);

	return 0;
}
