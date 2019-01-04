//p.85
#include <stdio.h>

int Notation(void)
{
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수 값: %d \n", num1);
	printf("0x43의 10진수 정수 값: %d \n", num2);
	printf(" 032의 10진수 정수 값: %d \n", num3);
	printf(" 024의 10진수 정수 값: %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n", num3, num4, num3 + num4);
	return 0;
}

//p.100 비트 이동 연산자
int BitRightShift(void)
{
	int num = -16; //11111111 11111111 11111111 1110000
	printf("2칸 오른쪽 이동의 결과: %d \n", num >> 2);
	printf("3칸 오른쪽 이동의 결과: %d \n", num >> 3);
	return 0;
}


// p.100 
// q4_4_1: 입력 받은 정수 값의 부호를 바꿔서 출력. Ex) 3 입력 시 -> -3 출력. 비트 연산자 이용하기.

int q4_4_1(void)
{	
	/*교과서 답안
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num, sizeof(num));
	num = ~num;
	num = num + 1;
	printf("부호를 바꾼 결과: %d \n", num);
	*/

	/*내 답안) 비트 연산자 이용
	int num1;
	int num2;
	int num1to2;

	printf("부호 변경 전 정수 : ");
	scanf_s("%d", &num1, sizeof(num1));

	num1to2 = ~num1;
	num2 = num1to2 + 1;
	printf("부호 변경 후 정수 : %d", num2);
	*/


	/*내 답안) 비트 연산자 이용x
	int num1;
	int num2;

	printf("부호 변경 전 정수 : ");
	scanf_s("%d", &num1, sizeof(num1));

	num2 = -num1;
	printf("부호 변경 후 정수 : %d", num2);
	*/       
	return 0;
}

//q4_4_2:

int q4_4_2(void)
{
	/*교과서 답안 
	int num = 3;
	num = num << 3;
	num = num >> 2;
	printf("%d \n", num);
	*/

	/*내 답안{오류}
	int num, multiply, divide;
	//int result;

	printf("num : ");
	scanf_s("%d", &num, sizeof(num));

	multiply = num << 3; //2의 3승, 8
	divide = num >> 2; //2의 2승, 4
	//result = multiply / divide;

	printf("multiply 결과: %d \n", multiply);
	printf("divide 결과: %d \n", divide);
	//printf("최종 결과: %d \n", result);
	*/
	return 0;	 	
}
	
int main(void)
{
	//Notation();
	//BitRightShift();
	//q4_4_1();
	//q4_4_2();
	return 0;
}
