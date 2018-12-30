#include <stdio.h>

int main(void) {
	int num;
	num = Fibonacci(7);
	printf("%d", num);
	Hanoi(4, 'A', 'B', 'C');
	return 0;
}

int Fibonacci(int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);	
}

int Hanoi(int num, char from, char by, char to) {
	if (num == 1)
		printf("���� 1�� %c���� %c�� �̵�\n", from, to);
	else {
		Hanoi(num - 1, from, to, by);
		printf("���� %d�� %c���� %c�� �̵�\n", num, from, to);
		Hanoi(num - 1, by, from, to);
	}
}