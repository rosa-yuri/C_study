#include <stdio.h>

//p.113 double �� �Է�, ���
int CircleArea(void)
{
	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad); //%lf : double �Է�

	area = rad * rad*3.1415;
	printf("���� ����: %f \n", area); //%f : double ���
	return 0;
}

//p.118
int q5_1_1(void)
{
	int x1, y1, x2, y2, result;

	printf("x1, y1 �Է�: ");
	scanf_s("x1: %d, y1: %d", &x1, &y1, sizeof(x1), sizeof(y1));
	printf("x2, y2 �Է�: ");
	scanf_s("x2: %d, y2: %d", &x2, &y2, sizeof(x2), sizeof(y2));

	result=(x2-x1)*(y2-y1);
	printf("��������� ����: %d", result);
	return 0;
}

int q5_1_2(void)
{
	double num1, num2;
	
	printf("num1 �Է�: num2 �Է�: ");
	scanf_s("num1: %lf, num2: %lf", &num1, &num2, sizeof(num1), sizeof(num2));

	
	printf("����: %f \n", num1 + num2);
	printf("����: %f \n", num1 - num2);
	printf("����: %f \n", num1 * num2);
	printf("������: %f \n", num1 / num2);

	return 0;
}


int main(void)
{
	//CircleArea();
	// q5_1_1();
	//q5_1_2();
	return 0;
}