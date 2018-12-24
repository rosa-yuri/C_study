#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
		int start, ends; //동적할당을 받기위한 변수
		int cnt; //저장되는 데이터의 갯수를 받기위한 변수
		int i, tmp, tmp2; //i는 함수 반복을 위한 변수, 
						  //tmp는 변환되는 값의 변수, 
						  //tmp2는 자릿수의 변수

		//동적할당
		printf("시작하는 숫자 : ");
		scanf_s("%d", &start);
		printf("끝나는 숫자 : ");
		scanf_s("%d", &ends);
		cnt = ends - start + 1;
		int * num = (int *)malloc(sizeof(int)*cnt); // malloc() 함수를 사용하여 cnt 크기의 바이트의 저장 공간을 확보하고, 그 주소를 int 형의 포인터 num에 할당
		int * bin = (int *)malloc(sizeof(int)*cnt); // num과 bin 포인터는 cnt만큼의 요소를 가지는 int 형의 배열을 가리킴

		for (i = 0; i < cnt; i++) {
			num[i] = i + start; //num[cnt]에 인자 입력
			bin[i] = 0; //bin[i]를 0으로 초기화
		}

		//10진수를 2진수로 변환시키는 for문
		for (i = 0; i < cnt; i++) {
			tmp = num[i];
			tmp2 = 1; //bin[i]의 자릿수를 초기화
			while (tmp != 0) { //
				bin[i] += tmp % 2 * tmp2;
				//현재 값에서 2로 나눈 나머지와 자리수를 곱한 수를
				//bin[i]에 저장하여 이진수로 표현 하는 방식
				tmp /= 2; //다음에 계산할 몫을 저장시키고
				tmp2 *= 10; //다음에 계산할 자릿수를 증가
			}
		}

		printf("10진수\t2진수\t8진수\t16진수\n");
		for (i = 0; i < cnt; i++) {
			printf("%d\t %d\t %o\t %x\t \n",
				num[i], bin[i], num[i], num[i]);

		//동적할당의 해제: free() 함수를 호출하여 할당된 메모리를 해제
		free(num); // malloc() 함수와 free() 함수가 서로 대응하고 있기 때문에, 메모리 누수가 발생하지 않음
		free(bin);

		return 0;
}


