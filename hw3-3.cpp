#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int mmin, m, cm, cm1, mm;

	printf("�и����͸� �Է��ϼ��� : ");
	scanf("%d", &mmin);

	m = mmin / 1000;
	cm1 = mmin % 1000; //mmin �� 1000���� ���� ������
	cm = cm1 / 10;
	mm = cm1 % 10;     //cm1�� 10���� ���� ������

	printf("%d�и����ʹ� %d����, %d��Ƽ����, %d�и������Դϴ�.", mmin, m, cm, mm);

	return 0;
}