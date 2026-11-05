// ******************************************
// 제 목 : 구조체배열을 이용한 출력
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>


struct student
{
	char name[10];
	int score;
};
int main(void)
{
	struct student arr[3];

	for (int i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: "); scanf("%s", arr[i].name);
		printf("성적을 입력하시오: "); scanf("%d", &arr[i].score);
	}

	int high = arr[0].score;
	int n = 0;

	for (int i = 1; i < 3; i++)
	{
		if (high < arr[i].score)
		{
			high = arr[i].score;
			n = i;
		}
	}
	
	printf("\n최우수 학생의 이름은 %s, 점수는 %d점", arr[n].name, arr[n].score);

	return 0;
}

