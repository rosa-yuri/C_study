#include <stdio.h>
#include <math.h>

int sub_22_c(void) {
	//q22_1_1();
	q22_2_1();
	return 0;
}

struct employee {
	char name[20];
	char num[20];
	int salary;
};

int q22_1_1(void) {
	struct employee em;
	scanf_s("%s", em.name, sizeof(em.name));
	scanf_s("%s", em.num, sizeof(em.num));
	scanf_s("%d", &(em.salary));

	printf("%s \n", em.name);
	printf("%s \n", em.num);
	printf("%d \n", em.salary);
	return 0;
}

int q22_2_1(void) {
	struct employee arr[3];
	for (int i = 0; i < 3; i++) {
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		scanf_s("%s", arr[i].num, sizeof(arr[i].num));
		scanf_s("%d", &arr[i].salary);
	}
	for (int i = 0; i < 3; i++) {
		printf("[%s, %s, %d] \n", arr[i].name, arr[i].num, arr[i].salary);
	}
	return 0;
}