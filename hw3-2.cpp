#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define base 7500
#define kw 15.52
#define tax 11.33

int main(void)
{
	int people, month;
	double val1, val2;

	printf("������ ���� �Է��Ͻÿ� : ");
	scanf("%d", &people);
	printf("���� ���� ��뷮�� �Է��ϼ���<kw> : ");
	scanf("%d", &month);

	val1 = month / people;              //1�δ� ���� ��뷮
	val2 = base + (val1 * kw) * tax;    //1�δ� ���� �����

	printf("1�δ� ���� ���� ������� %.2lf���Դϴ�.", val2);

	return 0;
}