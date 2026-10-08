#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연산 함수들
int Add(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return b != 0 ? a / b : 0; }

// 공통 출력 함수
void CalculateAndShow(int x, int y, int (*op)(int, int), char* opName)
{
    printf("%d %s %d = %d\n", x, opName, y, op(x, y));
}

int main(void)
{
    int num1 = 20, num2 = 10;

    // 함수포인터 배열
    int (*operations[4])(int, int) = { Add, Sub, Mul, Div };
    char* opNames[4] = { "+", "-", "*", "/" };

    // 공통 함수 호출
    for (int i = 0; i < 4; i++)
    {
        CalculateAndShow(num1, num2, operations[i], opNames[i]);
    }

    return 0;
}
