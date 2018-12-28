
#include <stdio.h>
#include <windows.h> //system("pause")와 함께 씀=콘솔창 멈추기

// 양수 정수 하나 입력, 그 수만큼 "Hello Word!" 출력
int q7_1_1(void)
{
	int num1;
	int i = 0;

	printf("양의 정수 하나 입력: ");
	scanf_s("%d", &num1);

	while (i<num1)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}

//양의 정수 하나 입력, 그 수만큼 3의 배수 출력
int q7_1_2(void)
{
	int num1;
	int cnt;
	int i=1;
	int multy;
	
	printf("양의 정수 하나 입력: ");
	scanf_s("%d", &num1);
	printf("몇 배수: ");
	scanf_s("%d", &cnt);

	multy = num1 * 3;
	
	while (i <= num1)
	{
		printf("%d의 %d배수: %d \n", num1, i, multy);
		i++;
	}   		
	return 0;
}

// 정수 입력, 그 값을 계속해서 더함, 0 입력 시까지 계속, 0 입력 시 모든 정수의 합 출력하고 종료 
int q7_1_3(void)
{
	int num1=0;
	int total=0;

	printf("정수 입력(0입력 시 종료): ");
	scanf_s("%d", &num1);

	total += num1;

	while (num1!=0)
	{
		printf("정수 입력(0입력 시 종료): ");
		scanf_s("%d", &num1);

		total += num1;
	}
	printf("합계: %d \n", total);
	return 0;
}

// 입력 받은 숫자에 해당하는 구구단을 역순으로 출력
int q7_1_4(void)
{
	int dan=0, num=9;

	printf ("구구단 몇 단? ");
	scanf_s("%d", &dan);

	while (num > 0)
	{
		printf("%d X %d = %d \n", dan, num, dan*num);
		num--;
	}
	return 0;
}


//입력 받은 정수의 평균을 출력. 
//조건 1)몇 개의 정수를 입력할 것인지 묻기. 
//조건 2)평균 값은 소수점 이하까지 계산해서 출력
int q7_1_5(void)
{
	int total=0, i=0;
	int num, input;

	printf("몇 개의 정수를 입력할 것인가?");
	scanf_s("%d", &num);

	while (i++<num)
	{
		printf("계산할 정수 입력: ");
		scanf_s("%d", &input);
		total += input;
	}
	printf("입력한 정수의 평균: %f \n", (double)total/num);
	return 0;
}


//p.156 구구단 전체 출력
int ggudan(void)
{
	int num1=2, num2;

	while (num1 < 10)
	{
		printf("%d 단 \n", num1);
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
<while문 중첩 기본 구조>
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

//#7-1(p.148~)

// <while 중첩 시키기>
// 총 5개의 정수 입력. 그 수의 합 출력. 
// 조건: 정수는 반드시 1이상, 만약 1미만의 수가 입력되는 경우 입력으로 인정하지 않고 재 입력 요구. 
// 결국 1이상의 정수 5개를 모두 입력 받을 수 있도록 프로그램 완성하기.
int q7_2_1(void)
{
	int total = 0, repeat = 0, input = 0;

	printf("총 5개의 정수 입력 \n");

	while (repeat < 5)
	{
		while (input <= 0)
		{
			printf("0보다 큰 수를 입력(%d번째):", repeat + 1);
			scanf_s("%d", &input);
		}
		total += input;
		input = 0;
		repeat++;
	}
	printf("총 합: %d \n", total);
	return 0;
}
//{중요}
// <while 중첩 시키기>
// 총 5행 출력, 행이 더해질 때마다 o문자 수가 증가.
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

//#7-2(p.157~)
//do~while -> while 변경
int q7_3_1_a(void)
{
	int total = 0, num=1;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	system("pause");
	return 0;
}

int q7_3_1_b(void)
{
	int total = 0, num = 0;

	printf("while 진입 전-정수 입력(0 to quit): ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("while 진입 후-정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	system("pause");
	return 0;
}


//[do~while문]0이상 ~ 100이하 모든 짝수 합계:
int q7_3_2(void)
{
	int total = 0, num = 0;

	do
	{
		total += num;
		num = 2 + num;
		printf("0이상 ~ 100이하 모든 짝수 : %d \n", num);
	} while (num <=100);

	printf("0이상 ~ 100이하 모든 짝수 합계: %d \n", total);
	system("pause");
	return 0;
}

//[do~while문]while 문 중첩 구구단 -> do~while문
int q7_3_3(void)
{
	int cur = 2, is = 0;

	do
	{
		is = 1;
		printf("\n");

		do 
		{
			printf("%d X %d = %d \n", cur, is, cur*is);
			is++;
		} while (is < 10);

		cur++;

	} while (cur < 10);
	system("pause");

	return 0;
}

//[for문] 입력: 2개의 정수, 출력: 두 정수 포함 그 사이 존재하는 정수들의 합
int q7_4_1(void)
{
	int num1, num2, total;

	printf("num1 정수 입력:");
	scanf_s("%d", &num1);

	printf("num2 정수 입력:");
	scanf_s("%d", &num2);

	for(total=0; num1 <= num2; num1++)
	{
		total += num1;
	}
	printf("정수들의 총합: %d \n", total);
	system("pause");

	return 0;
}


//[for문] 입력: n, 출력: n!
int q7_4_2(void)
{
	int num, start=1, total=1; //num: 마지막 값, start:초기값, i:1나씩 늘어나는 값, total:모든 수의 곱

	printf("num 입력: ");
	scanf_s("%d", &num);

	for (start = 1; start <= num; start++)
	{
		total = total*start;
	}
	printf("%d!: %d \n", num, total);
	system("pause");
	return 0;
}

//[for문] while 중첩 구구단 -> for 구구단(cf.p.156)
int gugudan_for(void)
{
	int cur, is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
			printf("%d X %d = %d \n", cur, is, cur * is);
		printf("\n");
	}
	system("pause");
	return 0;
}


//[for문] while 내 for 구구단 
int gugudan_for_in_while(void)
{
	int cur=2, is;

	while (cur < 10)
	{
		for (is = 1; is < 10; is++)
			printf("%d X %d = %d \n", cur, is, cur * is);
		printf("\n");

		cur++;
	}
	
	system("pause");

	return 0;
}


//[for문] for 내 while 구구단 
int gugudan_while_in_for(void)
{
	int cur, is=0;

	for (cur = 2; cur < 10; cur++)
	{
		is = 1; //{중요}
		while (is < 10)
		{
			printf("%d X %d = %d \n", cur, is, cur*is);
			is++;
		}
		printf("\n");
	}
	system("pause");

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
	//q7_2_2();
	//q7_3_1_a();
	//q7_3_1_b();
	//q7_3_2();
	//q7_3_3();
	//q7_4_1();
	//q7_4_2();
	//gugudan_for();
	//gugudan_for_in_while();
	gugudan_while_in_for();
	return 0;
}
