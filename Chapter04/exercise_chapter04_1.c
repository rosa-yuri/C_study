#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
		int start, ends; //�����Ҵ��� �ޱ����� ����
		int cnt; //����Ǵ� �������� ������ �ޱ����� ����
		int i, tmp, tmp2; //i�� �Լ� �ݺ��� ���� ����, 
						  //tmp�� ��ȯ�Ǵ� ���� ����, 
						  //tmp2�� �ڸ����� ����

		//�����Ҵ�
		printf("�����ϴ� ���� : ");
		scanf_s("%d", &start);
		printf("������ ���� : ");
		scanf_s("%d", &ends);
		cnt = ends - start + 1;
		int * num = (int *)malloc(sizeof(int)*cnt); // malloc() �Լ��� ����Ͽ� cnt ũ���� ����Ʈ�� ���� ������ Ȯ���ϰ�, �� �ּҸ� int ���� ������ num�� �Ҵ�
		int * bin = (int *)malloc(sizeof(int)*cnt); // num�� bin �����ʹ� cnt��ŭ�� ��Ҹ� ������ int ���� �迭�� ����Ŵ

		for (i = 0; i < cnt; i++) {
			num[i] = i + start; //num[cnt]�� ���� �Է�
			bin[i] = 0; //bin[i]�� 0���� �ʱ�ȭ
		}

		//10������ 2������ ��ȯ��Ű�� for��
		for (i = 0; i < cnt; i++) {
			tmp = num[i];
			tmp2 = 1; //bin[i]�� �ڸ����� �ʱ�ȭ
			while (tmp != 0) { //
				bin[i] += tmp % 2 * tmp2;
				//���� ������ 2�� ���� �������� �ڸ����� ���� ����
				//bin[i]�� �����Ͽ� �������� ǥ�� �ϴ� ���
				tmp /= 2; //������ ����� ���� �����Ű��
				tmp2 *= 10; //������ ����� �ڸ����� ����
			}
		}

		printf("10����\t2����\t8����\t16����\n");
		for (i = 0; i < cnt; i++) {
			printf("%d\t %d\t %o\t %x\t \n",
				num[i], bin[i], num[i], num[i]);

		//�����Ҵ��� ����: free() �Լ��� ȣ���Ͽ� �Ҵ�� �޸𸮸� ����
		free(num); // malloc() �Լ��� free() �Լ��� ���� �����ϰ� �ֱ� ������, �޸� ������ �߻����� ����
		free(bin);

		return 0;
}


