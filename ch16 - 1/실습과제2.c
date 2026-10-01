// ******************************************
// 제 목 : 1등 
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	int s[3][3], avg[3], e = 0;

	for (int i = 0; i < 3; i++)
	{
		int tot = 0;

		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력:", i + 1);

		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &s[i][j]);
			tot += s[i][j];
		}
		avg[i] = tot / 3;
	}

	int max;

	max = *avg;

	for (int k = 1; k < 3; k++)
	{
		if (*(avg + k) > max)
		{
			max = *(avg + k);
			e = k;
		}
	}

	printf("최우수 학생은 %d번째 학생이고 평균점수는 %d점이다.", e+1, max);

	return 0;
}




