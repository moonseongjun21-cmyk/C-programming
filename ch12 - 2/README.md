# 실습과제1

아래의 변수가 우측그림처럼 메모리가 할당될 때 다음표의 빈칸을 채우시오.  

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

# 실습과제2

아래코드에서 변수이름을 사용하지말고 포인터를 사용하여 같은결과가 나오도록 코드를 수정하시오.(예제1번참조)

<img width="2350" height="362" alt="스크린샷 2026-09-25 174246" src="https://github.com/user-attachments/assets/b0c29414-71a7-498e-ba4c-899a3670ea77" />

# 실습과제3

①번라인에서 강제형변환이 사용된 이유를 설명하라.
정수값을 포인터로 정해줘야 포인터(ptr)이 초기화될 수 있기때문입니다.

아래코드를 실행하면 오류가 발생하여 중단된다. 이유를 자세히 설명하라.
int* 125의 메모리 값을 사용할 수 없기 때문입니다.

<img width="1706" height="578" alt="스크린샷 2026-09-25 174550" src="https://github.com/user-attachments/assets/0fc84767-5d07-4d47-a456-2ce96628c860" />

# 실습과제4

아래코드를 포인터를 이용한 간접참조방식의 코드로 필요한 코드를 추가 또는 수정하시오. 실행결과는 같아야한다.

<img width="1726" height="714" alt="스크린샷 2026-09-25 174927" src="https://github.com/user-attachments/assets/b6e0a1a9-d659-4be1-9b57-25814db96907" />

수정 후 출력화면

<img width="2356" height="262" alt="스크린샷 2026-09-25 175554" src="https://github.com/user-attachments/assets/e3a85e65-d049-4e86-9acb-3d288a975ebc" />

# 실습문제5

교재 284페이지 문제1번 또는 2번을 자유롭게 변형하여 새로운 문제를 만들고 푸시오.
똑같은 문제를 풀면 0점 처리함

<img width="2350" height="306" alt="image" src="https://github.com/user-attachments/assets/aab75d71-3d1c-4ff8-8acb-c3ccaf11e88a" />




























