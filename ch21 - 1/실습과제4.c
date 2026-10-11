// ******************************************
// 제 목  : 버퍼 입출력
// 날 짜  : 2026년 10월 11일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void)
{
  charch;
  int i;
  for (i = 0; i < 5; i++)
  {
  printf("문자 입력:"); 
  scanf("%c", &ch); // abcde를 입력받음 // 두번째 부터 a뒤에 '\n'이 있기때문에 건너 뜀
  printf("문자: %c\n", ch); // %c이기 때문에 a출력 // 두번째는 b출력 
  }

  return 0;
}
