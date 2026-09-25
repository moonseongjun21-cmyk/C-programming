// ***********************************************
// 제 목 : 포인터로 배열 요소들의 합을 구하는 프로그램
// 날 짜 : 2026년 9월 10일
// 작성자 : 2600065 문성준
// ***********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

#include <stdio.h>

int main(void)
{
    int a[] = { 10, 20, 30 }, i, sum = 0;
    int* p = a;  

    for (i = 0; i < 3; i++)
    {
      sum += *p++;
    }
  
    printf("sum:%d\n", sum);

    return 0;
}
