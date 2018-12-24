#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ch22_sub_c(void) {
	//q21_1_1();
	//q21_2_1();
	//q21_2_2();
	q21_2_3();
	return 0;
}

int q21_1_1(void) {
	int ch;
	ch = getchar();
	if (ch >= 64 & ch <= 90) {
		ch += 32;
	}
	else if (ch >= 97 & ch <= 122) {
		ch -= 32;
	}
	else printf("should input English");
	putchar(ch);
	return 0;
}

int q21_2_1(void) {
	char str[30];
	int sum = 0;
	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= '1' & str[i] <= '9') {
			sum += str[i] - 48;
		}
	}
	printf("%d", sum);
	return 0;
}

int q21_2_2(void) {
	char str1[20];
	char str2[20];
	char str3[40];
	fgets(str1, sizeof(str1), stdin);
	removen(str1, strlen(str1));
	fgets(str2, sizeof(str2), stdin);
	removen(str2, strlen(str2));
	strncpy_s(str3, 40, str1, 20);
	strncat_s(str3, 40, str2, 20);
	puts(str3);
	return 0;
}

int removen(char *str, int len) {
	str[len-1] = 0;
}

int q21_2_3(void) {
	char str1[30];
	char str2[30];
	int stop1;
	int stop2;
	fgets(str1, sizeof(str1), stdin);
	removen(str1, strlen(str1));
	fgets(str2, sizeof(str2), stdin);
	removen(str2, strlen(str2));
	for (int i = 0; strlen(str1); i++) {
		if (str1[i] == 0)
			break;
		stop1 = i - 1;
	}
	for (int i = 0; strlen(str2); i++) {
		if (str2[i] == 0)
			break;
		stop2 = i - 1;
	}
	namecmp(str1, str2, stop1, stop2);
	agecmp(str1, str2, stop1, stop2);
	return 0;
}

int namecmp(char *str1, char *str2, int stop1, int stop2) {
	int same = 0;
	if (stop1 == stop2) {
		for (int i = 0; i <= stop1; i++) {
			if (str1[i] != str2[i]) {
				same += 1;
			}
		}
		if (same == 0)
			printf("이름이 같습니다.");
		else
			printf("이름이 다릅니다.");
	}
	else printf("이름이 다릅니다.");
	return 0;
}

int agecmp(char *str1, char *str2, int stop1, int stop2) {
	int age1;
	int age2;
	age1 = atoi(&str1[stop1]);
	age2 = atoi(&str2[stop2]);
	if (age1 == age2)
		printf("\n나이가 같습니다.");
	else
		printf("\n나이가 다릅니다.");
	return 0;
}