#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>

// 두 개의 int를 받아서 int를 반환하는 함수 포인터 타입 정의
typedef int (*Operation)(int, int);

// 덧셈 함수
int add(int a, int b) {
    return a + b;
}

// 곱셈 함수
int multiply(int a, int b) {
    return a * b;
}

// 함수 포인터를 매개변수로 받는 함수
void execute(Operation op, int x, int y) {
    printf("결과: %d\n", op(x, y));
}

int main() {
    // add 함수 포인터 전달
    execute(add, 3, 4);       // 결과: 7

    // multiply 함수 포인터 전달
    execute(multiply, 3, 4);  // 결과: 12

    return 0;
}















