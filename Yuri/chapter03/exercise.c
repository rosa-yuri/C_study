#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result1, result2, result3;


	printf("Q1. insert two numbers: ");
	scanf_s("%d %d", &num1, &num2); // 2 3 

	result1 = num1 - num2; // 2 - 3 = -1
	result2 = num1 * num2; // 2 * 3 = 6
	printf("%d - %d = %d \n", num1, num2, result1);
	printf("%d * %d = %d \n", num1, num2, result2);

	printf("Q2. insert three numbers: ");
	scanf_s("%d %d %d", &num1, &num2, &num3); //
	result3 = num1 * num2 + num3;
	printf("%d * %d + %d= %d", num1,num2,num3, result3); //2 * 4 + 6= 14

	printf("Q3. insert one number: ");
	scanf_s("%d", &num1); //
	result1 = num1 * num1;
	printf("%d 제곱의 결과: %d \n", num1, result1);  //5 제곱의 결과: 25

	printf("Q4. insert two numbers: ");
	scanf_s("%d %d", &num1, &num2);
	result2 = num1 / num2;
	result3 = num1 % num2; 
	printf("%d / %d 의 몫 = %d \n", num1, num2, result2); //7 / 2 의 몫 = 3
	printf("%d / %d 의 나머지 = %d \n", num1, num2, result3); //7 / 2 의 나머지 = 1

	printf("Q5. insert three numbers:");
	scanf_s("%d %d %d", &num1, &num2, &num3); // 1 2 3
	result1 = (num1 - num2)*(num2 + num3)*(num3%num1);
	printf("result: %d \n", result1); //result: 0
	
	
	return 0;	
}
