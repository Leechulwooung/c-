#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int kor, eng, mat, sci;

	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &kor);
	printf("�������� : %d \n", kor);

	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &eng);
	printf("�������� : %d \n", eng);

	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &mat);
	printf("�������� : %d \n", mat);

	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &sci);
	printf("�������� : %d \n", sci);

	printf("��� : %.2lf \n", (kor + eng + mat + sci) / 4.0);

	return 0;
}