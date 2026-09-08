실습과제1
아래의변수가우측그림처럼메모리가할당될때
다음표의빈칸을채우시오.  
힌트: *&ch-> (*(&ch))

charch= ‘A’;
int in = 10;
doubledb = 3.4;

|  수식  |     결과값     |  결과값의 자료형 | 
|:------:|:--------------:|:---------------:|
|   &ch  |      100       |       char*     |   
|   &in  |      101       |       int*      |     
|   &db  |      105       |      double*    |  
|  *&ch  |      'A'       |       char      |
|  *&in  |      10        |       int       |
|  *&db  |      3.4       |      double     |



실습과제2
아래코드에서 변수이름을 사용하지말고 포인터를 사용하여 같은
결과가 나오도록 코드를 수정하시오.(예제1번참조)

#include <stdio.h>
int main(void)
{
    int a = -100;
    변수선언
    int* d = &a;
    포인터 d는 a의 주소

    char b = ‘A’;
    변수선언
    char* e = &b;
    포인터 e는 b의 주소
    
    double c = 3.14;
    변수선언
    double* f = &c;
    포인터 f는 c의 주소
    
    printf(“int형변수a의값은: %d\n”, *d);
    printf(“char형변수b의값은: %c\n”, *e)
    printf(“double형변수c의값은: %lf\n”, *f);
    *연산자를 통해 메모리 공간의 값 구하기
    return0;
}



실습과제3
①번라인에서 강제형변환이 사용된 이유를 설명하라.
정수값을 포인터로 정해줘야 포인터(ptr)이 초기화될 수 있기때문입니다.

아래코드를 실행하면 오류가 발생하여 중단된다. 이유를 자세히 설명하라.
int* 125의 값이 쓰레기값이기 때문입니다.

#include<stdio.h>
intmain(void)
{
  int* ptr= (int*)125; // ①
  *ptr= 10;
  printf("%d\n", *ptr);
  return0;
}



실습과제4
아래코드를 포인터를 이용한 간접참조방식의 코드로 필요한코드를
추가 또는 수정하시오. 실행결과는 같아야한다.

#include<stdio.h>
intmain(void)
{
  int a = 100, b=200;
  int sum;
  sum = a + b; //포인터를이용하여수정
  printf(“두정수의합: %d\n”, sum); //포인터를이용하여수정
  return 0;
}



#include<stdio.h>
intmain(void)
{
  int a = 100, b=200;
  int* c = *&a;
  int* d = *&b;
  printf(“두정수의합: %d\n”, c + d); 
  return 0;
}



실습문제5
p284 문제1변형

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    변수선언
    
    int* p1 = &a;
    포인터 p1은 a의 주소
    
    int* p2 = &b;
    포인터 p2는 b의 주소

    (*p1) += 2;
    *p1(10) + 2 = 12
    
    (*p2) -= 5;
    *p2(20) - 5 = 15

    printf("a = %d, b = %d\n", a, b);
    a는 12, b는 15
    return 0;
}


























