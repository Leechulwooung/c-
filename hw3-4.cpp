#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char univ[20];
	char major[30];
	char blood;
	int age;
	double grade;

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	printf("�б��� �Է��ϼ��� : ");
	scanf("%s", univ);
	printf("�а��� �Է��ϼ��� : ");
	scanf("%s", major);
	printf("�������� �Է��ϼ��� : ");
	scanf(" %c", &blood);
	printf("���б� ������ �Է��ϼ��� : ");
	scanf("%lf", &grade);

	printf("��ö������ ���̴� %d���̰� %s %s�� �������̸� �������� %c�̰� ������ %.2lf�Դϴ�.", age, univ, major, blood, grade);

	return 0;
}