# 실습과제1

1.표준 입출력 스트림을 접근하는 방법을 설명하라.

입출력 함수에서 주소를 이용하여 스트림에 접근합니다.

2.공백을 포함한 문자열을 입력 받을 때 사용가능한 함수는?

gets, fgets

3.gets 함수사용시 가장 큰 문제점은 무엇인가?

입력되는 문자열의 크기가 배열의 크기보다 클 경우 할당 받지 않은 메모리를 참조하는 오류가 발생합니다.

4.fgets 함수 사용시 문제점은 무엇인가?

'\n'도 입력받습니다.

5.널문자(‘\0’)와 널포인터(NULL)의 용도를 설명하시오.

널 문자는 문자열의 종료 위치를 판단하게 해주는 용도이며, 널 포인터는 가리키는 대상(주소)이 없음을 나타내거나 포인터의 초기화 및 오류 검사에 사용됩니다.

# 실습과제2

키보드로부터 문자를 입력 받아 화면에 출력해주는 프로그램을 작성하시오. 

‘q’ 또는 ‘Q’를 입력하면 종료한다. 

반드시 문자 입출력 전용함수만 사용하라.

힌트: 무한 루프(while(1){...})와 if(종료조건) break문을 이용하라.

<img width="2348" height="490" alt="image" src="https://github.com/user-attachments/assets/93d10f5a-7e10-4350-aa74-3d37fdda1d68" />

# 실습과제3

아래 결과처럼 실행되도록 문자열 입출력 전용함수를 이용하여 코드를 작성하시오.

한글은 한문자를 2바이트로 저장함

<img width="954" height="488" alt="image" src="https://github.com/user-attachments/assets/363685b0-da33-41ee-b252-ab5a610068c5" />

<img width="2338" height="496" alt="스크린샷 2026-10-26 014752" src="https://github.com/user-attachments/assets/ac4cf7f2-bbf0-415b-8746-e11a02782e16" />

# 실습과제4

아래 코드에서 fgets함수는 엔터키까지 저장해주므로 출력하면 줄바꿈이 발생한다. 

엔터키를 널문자로 변경하는 코드를 추가하여 줄바꿈이 발생하지 않도록 해보시오

<img width="1698" height="614" alt="스크린샷 2026-10-26 020049" src="https://github.com/user-attachments/assets/bae7c2ab-7e76-4f3e-8d73-972316d3d030" />

<img width="2342" height="356" alt="image" src="https://github.com/user-attachments/assets/a76528e5-9865-46bf-960f-4a1a79860200" />

# 실습과제5

공백을 포함하는 문자열을 입력 받아 단어 수를 계산하여 출력하는 코드를 작성하라.

공백을 이용하여 단어를 구분할 것

<img width="2346" height="340" alt="image" src="https://github.com/user-attachments/assets/a7a55bfa-f9b2-4644-98d1-8266101cfac4" />
