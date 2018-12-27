#include <stdio.h>
#define ADD(a, b, c) ((a) + (b) + (c))
#define MUL(a, b, c) ((a) * (b) * (c))
#define PI 3.141592
#define AREA(r) ((r) * (r) * PI)
#define MAX(a, b) ((a) > (b)? (a) : (b))

int main(void) {
	//q26_1_1();
	//q26_1_2();
	q26_1_3();
	return 0;
}

int q26_1_1(void) {
	printf("%d %d\n", ADD(1, 2, 3), MUL(2,2,3));
	return 0;
}

int q26_1_2(void) {
	printf("%f\n", AREA(3));
	return 0;
}

int q26_1_3(void) {
	printf("%d\n", MAX(3, 4));
	return 0;
}