
// p. 136 Ư������(escape_sequence)
#include <stdio.h>

int escape_sequence(void)
{
	printf("����\n���� \n"); //���� {�߿�}
	printf("c��� \"���� ��\" �Դϴ�."); //ū ����ǥ ��� {�߿�}
	//printf("\a"); //�����
	printf("12\b�齺���̽� \n"); //�齺���̽�(backspace)=1ĭ �����
	printf("���ǵ�\f \n"); //���ǵ�(form feed)
	printf("ĳ���� ��\r�� \n"); //ĳ���� ����(carriage return)=�� �ٲ�(?)
	printf("��\t�� �� \n"); //���� ��
	printf("��\v�� �� \n"); //���� ��
	printf("����\'����ǥ \n"); //���� ����ǥ
	printf("����ǥ\? \n"); //����ǥ
	printf("��������\\"); //��������
	return 0;
}

int main(void)
{
	escape_sequence();
	return 0;
}

