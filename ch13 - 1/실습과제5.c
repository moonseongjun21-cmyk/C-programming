// **********************
// 제 목 : p300 문제2 변형
// 날 짜 : 2026년 9월 10일
// 작성자 : 2600065 문성준
// **********************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    double a[5];
    double* ptr = a;
    int i;

    // 배열 표현
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        a[i] += 2;
    }
    printf("배열 표현: ");
    
    for (i = 0; i < 5; i++)
    {
        printf("%.1f ", a[i]);
    }

    printf("\n");


    // 배열명을 이용한 주소 표현
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", a + i);
    }
    for (i = 0; i < 5; i++)
    {
        *(a + i) += 2;
    }

    printf("배열명을 이용한 주소 표현: ");
    for (i = 0; i < 5; i++)
    {
        printf("%.1f ", *(a + i));
    }
        printf("\n");

    // 포인터 변수를 이용한 배열 표현
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", ptr + i);
    }
    for (i = 0; i < 5; i++)
    {
        ptr[i] += 2;
    }
    
    printf("포인터 변수를 이용한 배열 표현: ");
    
    for (i = 0; i < 5; i++)
    {
        printf("%.1f ", ptr[i]);
    }
        printf("\n");

    // 포인터 변수를 이용한 주소 표현
    for (i = 0; i < 5; i++)
    {    
        scanf("%lf", ptr + i);
    }
    for (i = 0; i < 5; i++)
    {
        *(ptr + i) += 2;
    }

    printf("포인터 변수를 이용한 주소 표현: ");
    for (i = 0; i < 5; i++)
    {
        printf("%.1f ", *(ptr + i));
    }
    
    printf("\n");


    // 포인터에 덧셈 연산을 이용한 주소 표현
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", ptr + i);
    }
    for (i = 0; i < 5; i++)
    {
        *(ptr + i) += 2;
    }

    printf("포인터 덧셈 연산을 이용한 주소 표현: ");
    
    for (i = 0; i < 5; i++)
    {
        printf("%.1f ", *(ptr + i));
    }
    return 0;
}

   
