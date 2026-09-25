// ***********************
// 제 목 : 대소문자 변
// 날 짜 : 2026년 9월 17일
// 작성자 : 2600065 문성준
// ***********************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str[100];
    int i;

    printf("문자열을 입력하시오:");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
          str[i] = str[i] - ('a' - 'A'); 
        }
    }
    printf("변환결과 : %s\n", str);

    return 0;
}
