# 실습과제1

C언어에서 문자를 메모리에 저장하는 방식에대하여 설명하라.(아스키코드참고)
배열선언과 동시에 초기화하는 방법과 포인터변수에서 초기화하는 방법이 있습니다.

널문자의 용도를 설명하라.
배열의 끝을 알려주는 용도

메모리에 저장된 문자열의 끝을 찾는방법을 설명하라.
문자열 끝의 메모리 값이 0인 곳을 찾으면 됩니다.

문자열의 길이를 구하는 알고리즘을 설명하라.
끝이 널문자이므로 배열 값의 첫 번째 문자부터 널문자가 나올때까지 차례대로 출력합니다.

# 실습과제2




# 실습과제3



실습과제4

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



실습과제5

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

