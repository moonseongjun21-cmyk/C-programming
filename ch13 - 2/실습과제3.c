// ***********************
// 제 목 : 대소문자 변환
// 날 짜 : 2026년 9월 17일
// 작성자 : 2600065 문성준
// ***********************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char s[20];

	printf("문자열을 입력하시오:");
	scanf("%s", &s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 'a') // 대문자라는 뜻
		{
			s[i] += 32;
		}
		else if (s[i] >= 'a') // 소문자라는 뜻
		{
			s[i] -= 32;
		}
	}
	printf("반환결과 : %s", s);

	return 0;
}
