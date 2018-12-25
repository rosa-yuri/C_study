#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	//q25_2_1();
	q25_2_2();
	return 0;
}

int q25_2_1(void) {
	int num, len;
	char *str;
	scanf_s("%d", &num);
	getchar();
	str = (char *)malloc(sizeof(char)*(num+1));
	fgets(str, num + 1, stdin);
	len = strlen(str);
	for (int i = len; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i+1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}

int q25_2_2(void) {
	int num;
	int i = 0, max = 5;
	int *arr = (int *)malloc(sizeof(int) * max);
	while (1) {
		if (i == max-1) {
			max += 3;
			arr = (int *)realloc(arr, sizeof(int)*max);
		}
		scanf_s("%d", &num);
		if (num == -1) {
			break;
		}
		else {
			arr[i] = num;
			i++;
		}
	}
	for (int j = 0; j < i; j++) {
		printf("%d ", arr[j]);
	}
	return 0;
}