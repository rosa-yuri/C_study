/* Part04.  - Chapter21 */
/* p.443 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	char str1[20];
	char str2[20];

	printf("문자열 입력 1: ");
	scanf_s("%s", str1, sizeof(str1));  /* scanf_s 함수에서 String 사용 시, 반드시 sizeof() 지정해줄 것*/
	
	printf("문자열 입력 2: ");
	scanf_s("%s", str2, sizeof(str2));
	
	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다.");
		if (!strncmp(str1, str2, 3))
			puts("그러나 앞의 세 글자는 동일합니다.");
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