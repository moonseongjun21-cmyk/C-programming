# 실습과제1

함수의 인자와 매개변수의 차이를 설명하라.
인자는 함수를 호출할 때, 매개변수에 실제로 전달하는 값이고, 매개변수는 함수 내부에서 전달된 값을 저장하고 사용하는 역할입니다.

함수가 호출될 때 컴퓨터에 의해 자동으로 실행되는 2가지를 설명하라.
매개변수가 메모리에 할당되고 인자 값으로 초기화 됩니다.

값에 의한 함수 호출방식의 문제점을 설명하라.
다른 함수에서 선언된 지역변수의 값을 변경하는 것이 불가능합니다.

주소에 의한 함수 호출방식이 필요한 경우를 설명하라.
다른 함수에서 선언된 지역변수의 값을 변경하는 것이 가능합니다. 주소로 다른 함수의 변수 접근(간접 참조)은 가능합니다.

# 실습과제2

아래 코드에서 add2함수는 매개변수의 값을 2만큼 증가시키는 함수이다.

그러나 실행결과에서 보듯이 원하는 대로 동작하지 않는다.

그 이유를 17페이지 메모리 그림을 이용하여 자세히 설명하고 원하는 결과가 나오도록 코드를 수정하시오.

<img width="1716" height="752" alt="스크린샷 2026-09-25 202007" src="https://github.com/user-attachments/assets/ed64ca3b-a6c6-4278-9666-e751900405be" />

이유: 값에 의한 호출방식으로 다른 함수에서 선언된 지역변수의 값을 변경하는 것은 불가능하기 때문입니다.

코드수정

<img width="2356" height="318" alt="스크린샷 2026-09-25 202203" src="https://github.com/user-attachments/assets/5d289196-d3a2-4674-b314-4b8d9ea0c748" />

# 실습과제3

과제2번의 함수를 값에 의한 호출을 이용하여 2를 증가시킨 후 리턴하고 main함수에서 리턴값을 받아서 처리하는 방식으로 다음처럼 실행되도록 하시오.

반드시 함수의 선언, 호출, 정의를 모두 사용할 것

<img width="802" height="178" alt="스크린샷 2026-09-25 202302" src="https://github.com/user-attachments/assets/05d35974-e1e5-452b-918e-e881b65b1e68" />

# 실습과제4

swap함수 예제를 참고하여 아래 결과가 나오도록 코드를 수정 하시오. 
세 정수를 교환하는 부분은 반드시 함수(swap)로 작성하고 또, 함수의 선언, 호출, 정의를 모두 사용할 것.
세 정수의 교환방법은 실행결과로부터 유추하라.
24페이지처럼 시간에 따라 메모리의 상태를 그려보시오.

정수x를 입력 하시오:10<엔터>
정수y를 입력 하시오:20<엔터>
정수z를 입력 하시오:30<엔터>
swap함수 호출 전 x=10, y=20, z=30
swap함수 호출 후 x=20, y=30, z=10
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int swap(int* a, int* b, int* c);

int main(void)
{
	int x, y, z;

	printf("정수x를 입력 하시오:");
	scanf("%d", &x);
	
	printf("정수y를 입력 하시오:");
	scanf("%d", &y);

	printf("정수z를 입력 하시오:");
	scanf("%d", &z);

	printf("swap함수 호출 전 x=%d y=%d z=%d \n", x, y, z);

	swap(&x, &y, &z);
	printf("swap함수 호출 후 x=%d y=%d z=%d", x, y, z);

	return 0;
}

int swap(int* a, int* b, int* c)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *c;
	*c = tmp;
}
```


실습과제5

교재320페이지 문제1번을 푸시오. 
단, num 변수에 저장된 값을 100배 하는 함수로 수정하라.
함수의 선언, 호출, 정의를 모두 사용할 것

2가지 방식의 차이를 설명하고 원하는 결과는 어느 것인가?

값에 의한 호출방식으로 다른 함수에서 선언된 지역변수의 값을 변경하는 것은 불가능합니다.
주소에 의한 호출방식은 다른 함수에서 선언된 지역변수의 값을 변경하는 것은 가능합니다.

Call-by-value
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int SquareByValue(int num2);

int main(void)
{
	int num = 2;
	printf("num:%d \n", num);

	num = SquareByValue(num);
	printf("함수 호출 후 num:%d", num);

	return 0;
}

int SquareByValue(int num2)
{
	num2 = 100 * num2;

	return num2;
}
```
Call-by-reference
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int SquareByReference(int* num2);

int main(void)
{
	int num = 2;
	printf("num:%d \n", num);

	SquareByReference(&num);
	printf("함수 호출 후 num:%d", num);

	return 0;
}

int SquareByReference(int* num2)
{
	*num2 *= 100;
}
```



























