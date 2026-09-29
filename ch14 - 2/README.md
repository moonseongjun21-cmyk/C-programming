# 실습과제1

주소에 의한 호출을 사용해야하는 3가지 경우를 설명하라.

1. 다른 함수에서 선언된 지역 변수의 값을 변경하고 싶은 경우

2. 배열을 함수의 인자에 전달하는 경우

3. 함수의 리턴 값이 2개 이상인 경우 -> 첫번째 경우와 같음

최대값 구하는 알고리즘을 설명하라.

```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int get_max(int* array, int n);

int main(void)
{
	int grade[5];
	int i, max;
	
	for (i = 0; i < 5; i++)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}
	
	max = get_max(grade, 5);
	printf("최대값은 %d입니다. \n", max);
	
	return 0;
}

int get_max(int* array, int n)
{
	int i, max;
	
	max = *array;
	
	for (i = 0; i < n; i++)
	{
		if (*(array + i) > max)
		{
			max = *(array + i);

		}
	}

	return max;
}
```

const 선언을 사용하는 이유를 설명 하시오. 교재 322~323페이지 참고할 것.

값의 변경을 방지해 코드 안정성을 높이고, 가독성과 유지보수성을 개선하기 위함입니다.

# 실습과제2

최소값 구하기 예제를 참고하여 아래 결과가 나오도록 코드를 수정하시오. 최대값을 구하는 부분은 반드시 함수로 작성하시오.

<img width="952" height="504" alt="스크린샷 2026-09-29 195335" src="https://github.com/user-attachments/assets/9d9f2576-21b5-4350-bccb-73993f753616" />

<img width="2346" height="466" alt="스크린샷 2026-09-29 195654" src="https://github.com/user-attachments/assets/4a7a3137-c762-4b50-b57e-1bab90640b6b" />

# 실습과제3

키보드로 부터 5개의 정수를 입력 받아 배열(data)에 저장해주는 부분을 함수(get_data)로 작성하시오. 

아래코드에서 선언, 호출, 정의 부분을 실행 결과를 고려하여 완성하시오.

<img width="756" height="420" alt="스크린샷 2026-09-29 201053" src="https://github.com/user-attachments/assets/9f04ba05-7f4a-4abd-970a-7de143301108" />

<img width="2338" height="606" alt="스크린샷 2026-09-29 201124" src="https://github.com/user-attachments/assets/e209265f-d4a1-4705-b460-f5e3e70015f5" />

# 실습과제4

키보드로 부터 실수를 입력 받아 그것의 정수부와 소수부를 구하여 출력해주는 프로그램을 작성하시오.

정수부와 소수부를 구하여 리턴하는 부분을 1개의 함수로 작성할 것.

화면에 입출력하는 부분은 메인함수에서 작성할 것.

함수의 정의, 호출, 선언을 모두 작성하시오.

<img width="2350" height="376" alt="스크린샷 2026-09-29 205826" src="https://github.com/user-attachments/assets/536c161b-9a8b-4121-95b3-caa1ccea2f37" />

















