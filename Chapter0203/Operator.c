#include <stdio.h>

int main(void)
{
	int num1, num2;  //num1, num2 ���� ����
	int num3 = 30, num4 = 40; // num3, num4�� ���� �� �ʱ�ȭ
	
	// printf("num1: %d, num2: %d \n", num1, num2);   // �ʱ�ȭ ���� ���� ���������� ����Ͽ� �����߻�, ���� ������ �޸� ������ �������� ���� 
	num1 = 10;	// �ʱ�ȭ
	num2 = 20;	// �ʱ�ȭ

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);

	// �⺻ ������ ����
	num1 = 9, num2 = 2;	 // ���ʱ�ȭ�Ҷ��� �������� ���� �ʾƵ� ��
	printf("%d+%d=%d \n", num1, num2, num1+num2);
	printf("%d-%d=%d \n", num1, num2, num1-num2);
	printf("%d*%d=%d \n", num1, num2, num1*num2);
	printf("%d/%d�� �� =%d \n", num1, num2, num1/num2);
	printf("%d/%d�� ������ =%d \n", num1, num2, num1%num2);

	// ����, ���� ������ ����
	num1 = 12, num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);
	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);
	
	num3 = 10, num4 = (num3--) + 2; // ���� ����
	printf("num3: %d \n", num3);
	printf("num4: %d \n \n", num4);

	// ���迬���� Boolean
	int result1, result2, result3;
	result1 = (num1 == num2);
	result2 = (num1 <= num2); 
	result3 = (num1 > num2);
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n \n", result3);

	// �������� Boolean
	result1 = (num1 == 13 && num2 == 13); // �Ѵ� true
	result2 = (num1 < 12 || num2 ==13); // �ϳ��� true
	result3 = (!num1); // ���̸� false, �����̸� true
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n \n", result3);

	return 0;
}