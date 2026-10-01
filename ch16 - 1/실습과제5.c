// ******************************************
// 제 목 : 사전 
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char s[4][10];
	int n = 0;

	for(int i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력:", i + 1);
		scanf("%s", &s[i][0]);
	}

	for(int j = 0; j < 3; j++)
	{ 
		if (s[j][0] < s[j+1][0])
		{
			n = j+1;
		}
	}

	printf("사전에서 제일 뒤에 나오는 문자열: %s", s[n]);

	return 0;
}






