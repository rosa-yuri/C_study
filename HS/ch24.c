#include <stdio.h>

int  main(void) {
	//q24_1_1();
	q24_2_1();
	return 0;
}

int q24_1_1(void) {
	//mystory_w();
	//mystory_a();
	mystory_gets();
	return 0;
}

int mystory_w(void) {
	FILE *fp;
	fopen_s(&fp, "d:/data/mystory.txt", "wt");
	if (fp == NULL) {
		puts("file open failed");
		return -1;
	}
	fputs("#�̸�: ������ \n", fp);
	fputs("#�ֹι�ȣ: 900208-1012589 \n", fp);
	fputs("#��ȭ��ȣ: 010-1111-2222 \n", fp);
	fclose(fp);
	return 0;
}

int mystory_a(void) {
	FILE *fp;
	fopen_s(&fp, "d:/data/mystory.txt", "at");
	fputs("#��ܸԴ� ����: «��,  ������ \n", fp);
	fputs("#���: �౸ \n", fp);
	fclose(fp);
	return 0;
}

int mystory_gets(void) {
	FILE *fp;
	char str[100];
	fopen_s(&fp, "d:/data/mystory.txt", "rt");
	while (1) {
		if (feof(fp) != 0) {
			fclose(fp);
			break;
		}
		else {
			fgets(str, sizeof(str), fp);
			printf(str);
		}
	}
	return 0;
}

int q24_2_1(void) {
	FILE *fp;
	char str[100];
	fopen_s(&fp, "d:/data/mystory.txt", "rt");
	fseek(fp, 0, SEEK_END);
	int fsize = ftell(fp);
	printf("%d", fsize);
	fclose(fp);
	return 0;
}