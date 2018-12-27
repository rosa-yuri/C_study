/* Part04.  - Chapter21 */
/* p.443 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	char str1[20];
	char str2[20];

	printf("���ڿ� �Է� 1: ");
	scanf_s("%s", str1, sizeof(str1));  /* scanf_s �Լ����� String ��� ��, �ݵ�� sizeof() �������� ��*/
	
	printf("���ڿ� �Է� 2: ");
	scanf_s("%s", str2, sizeof(str2));
	
	if (!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");
		if (!strncmp(str1, str2, 3))
			puts("�׷��� ���� �� ���ڴ� �����մϴ�.");
	}
		
	return 0;
} 

/* Part04.  - Chapter22 */
/* p.457 */
struct person {
	char name[20];
	char mobile[20];
	int age;
};

int main2(void) {
	struct person member1, member2, member3;
	strcpy_s(member1.name, sizeof(member1.name), "Thomas");
	strcpy_s(member2.name, sizeof(member2.name), "Anthony");
	strcpy_s(member1.mobile, sizeof(member1.mobile), "010-1234-5678");
	strcpy_s(member2.mobile, sizeof(member2.mobile), "010-0987-6543");
	member1.age = 22;
	member2.age = 43;

	printf("insert new name: "); 		scanf_s("%s \n", member3.name, sizeof(member3.name));
	printf("insert mobile number: "); 	scanf_s("%s \n", member3.mobile, sizeof(member3.mobile));
	printf("insert age: ");				scanf_s("%d \n", &(member3.age));

	printf("name: %s \n", member1.name);
	printf("mobile: %s \n", member1.mobile);
	printf("age: %d  \n", member1.age);

	printf("name: %s \n", member2.name);
	printf("mobile: %s \n", member2.mobile);
	printf("age: %d  \n", member2.age);

	printf("name: %s \n", member3.name);
	printf("mobile: %s \n", member3.mobile);
	printf("age: %d  \n", member3.age);

	return 0;
}