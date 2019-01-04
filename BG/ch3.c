// Ch. 3

// p.55 덧셈 프로그램

#include <stdio.h>

int SimpleAddTwo(void)
{
	int num1=3;
	int num2=4;
	int res=num1+num2;

	printf("%d \n", res);
	return 0;
}


// p.61 증가 감소 연산자
int OperatorFour(void)
{
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); //후위 증가
	printf("num1: %d \n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); // 전위 증가
	printf("num2: %d \n", num2);

	return 0;
}


// p.62 
int OperatorFive(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; //후위 감소

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);

	return 0;
}


// p.70 scanf_s("입력 받을 형태",&변수이름, sizeof(입력 받을 크기))
int SimpleAddThree(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1, sizeof(num1)); //첫 번째 정수 입력
	printf("정수 two: ");
	scanf_s("%d", &num2, sizeof(num2)); // 두 번째 정수 입력

	result = num1 + num2;
	printf("%d+%d=%d \n", num1, num2, result);
	return 0;
}


// p.74 문제
// 2개의 정수 입력, 두 수의 뺄센, 곱셈 결과 출력하는 프로그램 작성
int q3_1_1(void)
{
	int result1, result2;
	int num1;
	int num2;


	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));

	result1 = num1 + num2;
	result2 = num1 * num2;
	printf("%d \n",result1);
	printf("%d",result2);
	return 0;
}

// 3개의 정수 입력, num1 * num2 + num3 연산
int q3_1_2(void)
{
	int num1, num2, num3;
	int result;

	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));
	printf("num3: ");
	scanf_s("%d", &num3, sizeof(num3));

	result = num1 * num2 + num3;
	printf("%d", result);
	return 0;
}

// 1나의 정수 입력, 제곱의 결과
int q3_1_3(void)
{
	int num, result;

	printf("num: ");
	scanf_s("%d", &num, sizeof(num));

	result = num * num;
	printf("%d", result);
	return 0;


	/* 아래 다시 하기
	double i, j, result;

	printf("숫자(i)입력: ");
	scanf_s("%d", &i, sizeof(i));
	printf("몇 승(j)입력: ");
	scanf_s("%d", &j, sizeof(j));

	result = pow(i, j);
	printf("%d", result);
	return 0;
	*/
}

//입력 받은 두 정수를 나누었을 때의 몫, 나머지 출력하기. ex)7,2 입력->몫 3, 나머지1 출력.
int q3_1_4(void)
{
	int num1, num2, result1, result2;

	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));

	result1 = num1 / num2; //몫 반환
	result2 = num1 % num2; //나머지 반환 
	printf("%d \n", result1);
	printf("%d", result2);
	return 0;
}

int q3_1_5(void)
{
	int num1, num2, num3, result;

	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));
	printf("num3: ");
	scanf_s("%d", &num3, sizeof(num3));

	result = (num1 - num2)*(num2 + num3)*(num3 % num1);
	printf("%d", result);
	return 0;	
}


int main(void)
{
	// SimpleAddTwo();
	// OperatorFour();
	// OperatorFive();
	// SimpleAddThree();
	// q3_1_1();
	// q3_1_2();
	// q3_1_3();
	// q3_1_4();
	// q3_1_5();
	return 0;
}
