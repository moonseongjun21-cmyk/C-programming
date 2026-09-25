// *********************************
// 제 목 : 사전에 앞서있는 문자열 출력
// 날 짜 : 2026년 9월 17일
// 작성자 : 2600065 문성준
// *********************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str1[100], str2[100];

    printf("문자열을 입력하시오:");
    scanf("%s", str1);

    printf("문자열을 입력하시오:");
    scanf("%s", str2);

    if (str1[0] < str2[0])
    {
        printf("사전에서 앞에 나오는 문자열: %s\n", str1);
    }
    else
    {
        printf("사전에서 앞에 나오는 문자열: %s\n", str2);
    }
    return 0;
}


