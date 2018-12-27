#include <stdio.h>
extern void Increment(void);
extern int GetNum(void);
extern int num;

int main(void) {
	Increment();
	printf("%d", num);
}
