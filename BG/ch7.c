
#include <stdio.h>

// ��� ���� �ϳ� �Է�, �� ����ŭ "Hello Word!" ���
int q7_1_1(void)
{
	int num1;
	int i = 0;

	printf("���� ���� �ϳ� �Է�: ");
	scanf_s("%d", &num1);

	while (i<num1)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}

//���� ���� �ϳ� �Է�, �� ����ŭ 3�� ��� ���
int q7_1_2(void)
{
	int num1;
	int cnt;
	int i=1;
	int multy;
	
	printf("���� ���� �ϳ� �Է�: ");
	scanf_s("%d", &num1);
	printf("�� ���: ");
	scanf_s("%d", &cnt);

	multy = num1 * 3;
	
	while (i <= num1)
	{
		printf("%d�� %d���: %d \n", num1, i, multy);
		i++;
	}   		
	return 0;
}

// ���� �Է�, �� ���� ����ؼ� ����, 0 �Է� �ñ��� ���, 0 �Է� �� ��� ������ �� ����ϰ� ���� 
int q7_1_3(void)
{
	int num1=0;
	int total=0;

	printf("���� �Է�(0�Է� �� ����): ");
	scanf_s("%d", &num1);

	total += num1;

	while (num1!=0)
	{
		printf("���� �Է�(0�Է� �� ����): ");
		scanf_s("%d", &num1);

		total += num1;
	}
	printf("�հ�: %d \n", total);
	return 0;
}

// �Է� ���� ���ڿ� �ش��ϴ� �������� �������� ���
int q7_1_4(void)
{
	int dan=0, num=9;

	printf ("������ �� ��? ");
	scanf_s("%d", &dan);

	while (num > 0)
	{
		printf("%d X %d = %d \n", dan, num, dan*num);
		num--;
	}
	return 0;
}


//�Է� ���� ������ ����� ���. 
//���� 1)�� ���� ������ �Է��� ������ ����. 
//���� 2)��� ���� �Ҽ��� ���ϱ��� ����ؼ� ���
int q7_1_5(void)
{
	int total=0, i=0;
	int num, input;

	printf("�� ���� ������ �Է��� ���ΰ�?");
	scanf_s("%d", &num);

	while (i++<num)
	{
		printf("����� ���� �Է�: ");
		scanf_s("%d", &input);
		total += input;
	}
	printf("�Է��� ������ ���: %f \n", (double)total/num);
	return 0;
}


//p.156 ������ ��ü ���
int ggudan(void)
{
	int num1=2, num2;

	while (num1 < 10)
	{
		printf("%d �� \n", num1);
		num2 = 1;
		while (num2 < 10)
		{
			printf("%d x %d = %d \n", num1, num2, num1*num2);
			num2++;
		}
		num1++;
	}
	return 0;
}

/*
<while�� ��ø �⺻ ����>
int piled_sentece(void)
{
	int n1 = 0, n2 = 0;

	while (n1 < 3)
	{
		n2=0

		while (n2 < 2)
		{
			printf("%d %d \n", n1, n2);
			n2++;
		}
		n2++;
	}
	return0;
}
*/

// <while ��ø ��Ű��>
// �� 5���� ���� �Է�. �� ���� �� ���. 
// ����: ������ �ݵ�� 1�̻�, ���� 1�̸��� ���� �ԷµǴ� ��� �Է����� �������� �ʰ� �� �Է� �䱸. 
// �ᱹ 1�̻��� ���� 5���� ��� �Է� ���� �� �ֵ��� ���α׷� �ϼ��ϱ�.
int q7_2_1(void)
{
	int total = 0, repeat = 0, input = 0;

	printf("�� 5���� ���� �Է� \n");

	while (repeat < 5)
	{
		while (input <= 0)
		{
			printf("0���� ū ���� �Է�(%d��°):", repeat + 1);
			scanf_s("%d", &input);
		}
		total += input;
		input = 0;
		repeat++;
	}
	printf("�� ��: %d \n", total);
	return 0;
}
//{�߿�}
// <while ��ø ��Ű��>
// �� 5�� ���, ���� ������ ������ o���� ���� ����.
int q7_2_2(void)
{
	int num1=0, num2=0;

	while (num1<5)
	{
		while (num2<num1)
		{
			printf("o ");
			num2++;
		}
		 num2 = 0;
		printf("* \n");
		num1++;
	}
	return 0;
}


int main(void)
{
	//q7_1_1();
	//q7_1_2();
	//q7_1_3();
	//q7_1_4();
	//q7_1_5();
	//ggudan();
	//q7_2_1();
	q7_2_2();
	return 0;
}
