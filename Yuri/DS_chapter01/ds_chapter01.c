#include <stdio.h>

int LSearch(int ar[], int len, int target)	/* 순차 탐색 알고리즘 적용 함수*/
{ 
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i;  /* 찾은 대상의 인덱스 값 변환*/
	}
	return -1;   /*인덱스 값을 못 찾았을 경우*/
}

int BSearch(int ar[], int len, int target) /* 이진 탐색 알고리즘 적용 함수 */
{
	int first = 0;	/* first idx */
	int last = len - 1;  /*last idx */
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;
		if (target == ar[mid]) 
			return mid;
		else
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 3,5,2,4,9 };
	int arr2[] = { 1,3,5,7,9 };
	int idx;

	idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
	if (idx == -1)
		printf("failed \n");
	else
		printf("target idx: %d \n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("failed \n");
	else
		printf("target idx: %d \n", idx);


	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 7);
	if (idx == -1)
		printf("failed \n");
	else
		printf("target idx: %d \n", idx);

	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 4);
	if (idx == -1)
		printf("failed \n");
	else
		printf("target idx: %d \n", idx);

	return 0;
}