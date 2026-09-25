// *********************************************
// 제 목 : 문자열 중 사전의 앞에 나오는 문자열 찾기
// 날 짜 : 2026년 9월 17일
// 작성자 : 2600065 문성준
// *********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    int i = 1, n, fidx;

    char* fruits[] = { "apple", "blueberry", "orange", "melon" };

    n = sizeof(fruits) / sizeof(fruits[0]);
    fidx = 0;

    while ( i < n )
    {
        if (fruits[i][0] < fruits[fidx][0])
        { 
            fidx = i;
        }
        i++;
    }

    printf("사전에서 가장 앞에 나오는 문자열: %s\n", fruits[fidx]);

    return 0;
}
