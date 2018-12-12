#include <stdio.h>

int main(void)
{
	int num1, num2;  //num1, num2 변수 선언
	int num3 = 30, num4 = 40; // num3, num4의 선언 및 초기화
	
	// printf("num1: %d, num2: %d \n", num1, num2);   // 초기화 되지 않은 지역변수를 사용하여 에러발생, 과거 버전과 달리 난수를 생성하지 않음 
	num1 = 10;	// 초기화
	num2 = 20;	// 초기화

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);

	// 기본 연산자 연습
	num1 = 9, num2 = 2;	 // 재초기화할때는 변수선언 하지 않아도 됨
	printf("%d+%d=%d \n", num1, num2, num1+num2);
	printf("%d-%d=%d \n", num1, num2, num1-num2);
	printf("%d*%d=%d \n", num1, num2, num1*num2);
	printf("%d/%d의 몫 =%d \n", num1, num2, num1/num2);
	printf("%d/%d의 나머지 =%d \n", num1, num2, num1%num2);

	// 증가, 감소 연산자 연습
	num1 = 12, num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);
	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);
	
	num3 = 10, num4 = (num3--) + 2; // 후위 감소
	printf("num3: %d \n", num3);
	printf("num4: %d \n \n", num4);

	// 관계연산자 Boolean
	int result1, result2, result3;
	result1 = (num1 == num2);
	result2 = (num1 <= num2); 
	result3 = (num1 > num2);
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n \n", result3);

	// 논리연산자 Boolean
	result1 = (num1 == 13 && num2 == 13); // 둘다 true
	result2 = (num1 < 12 || num2 ==13); // 하나만 true
	result3 = (!num1); // 참이면 false, 거짓이면 true
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n \n", result3);

	return 0;
}