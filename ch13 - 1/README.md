실습과제1

배열명의 의미를 설명하라. 배열 첫번째 요소의 주소(변수가 아니고 상수임)

배열표현과 포인터(주소) 표현의 변환 공식을 설명하라. 𝑎[𝑖]≡∗(𝑎+𝑖)

배열의 첫번째 요소의 주소만 알면 모든 원소의 주소를 계산할 수 있다. 방법을 설명하시오. 

포인터 연산에서는 계산을 컴파일러가 자동으로 처리해주므로, a + i 라고만 쓰면 된다.

배열의 첫번째 요소의 주소만 알면 모든 원소의 값를 계산할 수 있다. 방법을 설명하시오.

a+i에 간접참조연산자 *를 적용하면 그 위치에 저장된 값을 얻을 수 있다.

포인터에 대해 가능한 연산의 종류와 의미를 설명하라. 간접참조(*), 정수덧셈(+), 정수뺄셈(-), 증감(++, --) 

포인터 연산을 기존의 산술연산과 다르게 정의한 이유는 무엇일까? 메모리 주소와 자료형 크기 때문입니다.



실습과제2
다음 코드의 배열 표현을 포인터(주소) 표현으로 변경하시오.
```#include<stdio.h>
int main(void)
{
int grade[5];
int sum = 0, i, average;
for(i= 0; i< 5; i++)
{
printf("성적을 입력하시오: ");
scanf("%d", &(*(grade +i)));
}
for(i= 0; i< 5; i++)
  sum += *(grade +i);

average = sum / 5.0;
printf("성적 평균= %d\n", average);

return0;
}
```


실습과제3
증감연산자 a++, ++a의 차이를 설명하시오. 후위증가와 전위증가입니다.

다음코드의문제점을설명하고 포인터를 이용하여 문제를 해결하시오.
```#include<stdio.h>
int main(void)
{
int a[] = { 10, 20, 30 }, i, sum = 0;

for (i = 0; i < 3; i++)
  sum += *(a + i);
printf("sum:%d\n", sum);
return0;
}
```



실습과제4
교재299페이지 문제1에서 배열의 초기값을 키보드로부터 5개의 
실수를 입력 받아 저장하고 나머지는 문제와 동일하게 푸시오.

키보드로부터 입력 받아 저장할 때도 문제처럼 포인터 변수를 증가
시키는 형태의 연산을 이용하여 작성하시오.-> 증감연산자 사용

```#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
	int arr[5];
	int* ptr = arr;
	int i = 0;
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &(ptr[i]));
		*(ptr + i) += 2;
		printf("%d \n", *(ptr + i));
	}
	return 0;
```



실습과제5
```#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include<stdio.h>
int main(void)
{
	int a[5], i = 0, sum = 0;
	int* ptr = a;

	while (i < 5)
	{
		scanf("%d", &ptr[i]);
		printf("%d \n", &ptr[i]);
		ptr[i] += 2;
		printf("%d \n", ptr[i]);
		i++;
	}

	return 0;
}
```
