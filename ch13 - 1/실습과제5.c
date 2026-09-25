// ***************************************
// 제 목 : p300 문제2 변형
// 날 짜 : 2026년 9월 10일
// 작성자 : 2600065 문성
// ***************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void)
{
    double arr[5];
    double *ptr = arr;
    double *temp;
    int i;

    printf("5개의 실수를 입력하시오.\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%lf", ptr + i);
    }
    
    for (i = 0; i < 5; i++)
    {
      *(ptr + i) += 2.0;
    }

    printf("1. arr[i] : "); // 배열표현

    for (i = 0; i < 5; i++)
    [
      printf("%.2f ", arr[i]);
    }
    
    printf("\n");

    printf("2. *(arr+i) : "); // 배열명을 이용한 주소표현

    for (i = 0; i < 5; i++)
    {
      printf("%.2f ", *(arr + i));
    }

    printf("\n");

    printf("3. ptr[i] : "); 포인터 변수를 이용한 배열표현

    for (i = 0; i < 5; i++)
    {    
      printf("%.2f ", ptr[i]);
    }

    printf("\n");

    printf("4. *(ptr+i) : "); // 포인터 변수를 이용한 주소표현

    for (i = 0; i < 5; i++)
    {
      printf("%.2f ", *(ptr + i));
    }

    printf("\n");

    temp = ptr; // 증감연산자를 이용한 주소표현

    printf("5. *temp++ : ");

    for (i = 0; i < 5; i++)
    {        
      printf("%.2f ", *(temp++));
    }

    printf("\n");

   
