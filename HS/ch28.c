#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	//q28_1_1();
	//q28_1_2();
	//q28_1_3();
	//q28_1_4();
	//q28_1_5();
	q28_1_6and7();
	return 0;
}

typedef struct {
	char writer[20];
	char name[20];
	int num;
}Book;

typedef struct {
	float a;
	float b;
}Complex;

typedef struct {
	char name[20];
	char number[20];
	int idx;
}Phone;

int q28_1_1(void) {
	Book book[3];
	for (int i = 0; i < 3; i++) {
		printf("writer? ");
		scanf_s("%s", book[i].writer, sizeof(book[i].writer));
		printf("\nname? ");
		scanf_s("%s", book[i].name, sizeof(book[i].name));
		printf("\nnum? ");
		scanf_s("%d", &book[i].num);
	}
	for (int i = 0; i < 3; i++) {
		printf("\nbook %d \n", i + 1);
		printf("writer: %s\n", book[i].writer);
		printf("name: %s\n", book[i].name);
		printf("num: %d", book[i].num);
	}
	return 0;
}

int q28_1_2(void) {
	Book *book;
	book = (Book *)malloc(sizeof(book)*3);
	for (int i = 0; i < 3; i++) {
		printf("writer? ");
		scanf_s("%s", book[i].writer, sizeof(book[i].writer));
		printf("\nname? ");
		scanf_s("%s", book[i].name, sizeof(book[i].name));
		printf("\nnum? ");
		scanf_s("%d", &book[i].num);
	}
	for (int i = 0; i < 3; i++) {
		printf("\nbook %d \n", i + 1);
		printf("writer: %s\n", book[i].writer);
		printf("name: %s\n", book[i].name);
		printf("num: %d", book[i].num);
	}
	return 0;
	free(book);
}

int q28_1_3(void) {
	Complex num1 = { 1.2, 2.4 };
	Complex num2 = { 1.1, 2.2 };
	add(num1, num2);
	mul(num1, num2);
	return 0;
}

void put_complex(Complex num) {
	printf("res] float: %f, imaginary: %f\n", num.a, num.b);
}

int add(Complex num1, Complex num2) {
	Complex res;
	res.a = num1.a + num2.a;
	res.b = num1.b + num2.b;
	put_complex(res);
	return 0;
}

int mul(Complex num1, Complex num2) {
	Complex res;
	res.a = (num1.a * num2.a) - (num1.b * num2.b);
	res.b = (num1.b * num2.a) + (num1.a * num2.b);
	put_complex(res);
	return 0;
}

int q28_1_4(void) {
	FILE *fp;
	char word[30];
	int numA = 0, numP = 0;
	int nut;
	fopen_s(&fp, "d:/data/test.txt", "r");
	if (fp == NULL) {
		puts("file open failed");
		return -1;
	}
	while (1) {
		nut = fscanf_s(fp, "%s", word, sizeof(word));
		if (nut == feof(fp)-1)
			break;
		if (nut == EOF)
			break;
		printf("%s \n", word);
		if (word[0] == 'a')
			numA += 1;
		if (word[0] == 'p')
			numP += 1;
	}
	printf("%d %d", numA, numP);
	fclose(fp);
	return 0;
}

int q28_1_5(void) {
	FILE *fp1;
	FILE *fp2;
	char res1, res2;
	fopen_s(&fp1, "d:/data/test.txt", "rt");
	fopen_s(&fp2, "d:/data/test2.txt", "rt");
	while (1) {
		res1 = fgetc(fp1);
		res2 = fgetc(fp2);
		if (res1 != res2) {
			printf("not same");
			break;
		}
		else if (res1 & res2 == EOF) {
			printf("same");
			break;
		}
	}

	return 0;
}

int q28_1_6and7(void) {
	int num;
	int idx = 1;
	int size = 0;
	Phone *phone;
	phone = (Phone *)malloc(size);
	printf("MENU\n");
	printf("1. Insert\n");
	printf("2. Delete\n");
	printf("3. Search\n");
	printf("4. Print All\n");
	printf("5. Exit\n");
	printf("6. Save\n");
	printf("7. Load\n");
	while (1) {
		printf("Choose the item: ");
		scanf_s("%d", &num);
		getchar();
		if (num == 1) {
			size++;
			phone = realloc(phone, size);
			printf("[Insert]");
			printf("Input Name: ");
			scanf_s("%s", &phone[idx].name, sizeof(phone[idx].name));
			getchar();
			printf("Input Number: ");
			scanf_s("%s", &phone[idx].number, sizeof(phone[idx].number));
			getchar();
			printf("Data Inserted\n");
			phone[idx].idx = idx;
			idx++;
		}
		if (num == 2) {
			phone_delete(phone, idx);
		}
		if (num == 3) {
			phone_search(phone, idx);
		}
		if (num == 4) {
			phone_print(phone, idx);
		}
		if (num == 5)
			break;
		if (num == 6)
			save_data(phone, idx);
		if (num == 7)
			load_data(phone, idx);
	}
	return 0;
}

int phone_delete(Phone phone[], int idx) {
	char tmp[20];
	printf("name? ");
	scanf_s("%s", &tmp, sizeof(tmp));
	for (int i = 1; i < idx; i++) {
		if (strcmp(tmp, phone[i].name)==0) {
			phone[i].idx = -1;
			printf("deleted \n");
		}
	}
	return 0;
}

int phone_search(Phone phone[], int idx) {
	char tmp[20];
	printf("name? ");
	scanf_s("%s", &tmp, sizeof(tmp));
	for (int i = 1; i < idx; i++) {
		if (strcmp(tmp, phone[i].name) == 0) {
			if (phone[i].idx != -1)
				printf("[%s, %s]\n", phone[i].name, phone[i].number);
		}
	}
	return 0;
}

int phone_print(Phone phone[], int idx) {
	for (int i = 1; i < idx; i++) {
		if (phone[i].idx != -1)
			printf("[%s, %s]\n", phone[i].name, phone[i].number);
	}
	return 0;
}

int save_data(Phone phone[], int idx){
	FILE *fp;
	fopen_s(&fp, "d:/data/phone.txt", "wt");
	if (fp == NULL) {
		puts("failed");
		return -1;
	}
	for (int i = 1; i < idx; i++) {
		fputs(phone[i].name, fp);
		fputc('\n', fp);
		fputs(phone[i].number, fp);
		fputc('\n', fp);
		fputs(phone[i].idx, fp);
		fputc('\n', fp);
		if (feof(fp) != 0)
			break;
	}
	fclose(fp);
	printf("saved \n");
	return 0;
}

int load_data(Phone phone[], int idx) {
	FILE *fp;
	fopen_s(&fp, "d:/data/phone.txt", "rt");
	if (fp == NULL) {
		puts("failed");
		return -1;
	}
	for (int i = 1; i < idx; i++) {
		if (feof(fp) != 0) {
			break;
		}
		fscanf_s(fp, "%s %s %d", phone[i].name, phone[i].number, phone[i].idx);
	}
	fclose(fp);
	printf("loaded \n");
	return 0;
}