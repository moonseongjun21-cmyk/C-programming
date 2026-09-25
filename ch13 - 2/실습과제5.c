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
