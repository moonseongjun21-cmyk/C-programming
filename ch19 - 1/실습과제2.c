// ******************************************
// 제 목 : 매개변수로 함수 포인터 전달
// 날 짜 : 2026년 10월 8일
// 작성자 : 2600065 문성준
// ******************************************

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









// ******************************************
// 제 목 : 매개변수로 void 포인터 활용
// 날 짜 : 2026년 10월 8일
// 작성자 : 2600065 문성준
// ******************************************

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>

// void* 포인터를 매개변수로 받아 출력하는 함수
void printValue(void* ptr, char type) {
    switch (type) {
    case 'i': // int
        printf("int 값: %d\n", *(int*)ptr);
        break;
    case 'f': // float
        printf("float 값: %.2f\n", *(float*)ptr);
        break;
    case 'c': // char
        printf("char 값: %c\n", *(char*)ptr);
        break;
    default:
        printf("알 수 없는 타입\n");
    }
}

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'X';

    // 각각 다른 타입을 void*로 전달
    printValue(&a, 'i');  // int 값: 10
    printValue(&b, 'f');  // float 값: 3.14
    printValue(&c, 'c');  // char 값: X

    return 0;
}















