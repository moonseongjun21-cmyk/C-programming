// ******************************************
// 제 목 : 문자열 길이
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char s[4][10];
	int cnt;

	for(int i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력:", i + 1);
		scanf("%s", &s[i][0]);
	}
	
	for(int j = 0; j < 4; j++)
	{
		cnt = 0;

		for (int k = 0; s[j][k] != '\0'; k++)
		{
			cnt += 1;
		}
		printf("%d번째 문자열 길이: %d \n", j+1, cnt);
	}

	return 0;
}




