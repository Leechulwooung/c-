#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int amount;

	printf("�ݾ��� �Է��ϼ��� : ");
	scanf("%d", &amount);

	int Ohman = amount / 50000;
	int man1 = amount % 50000;
	printf("����������: %d�� %d��\n", Ohman, Ohman*50000);

	int man = man1 / 10000;
	int Ohcheon1 = man1 % 10000;
	printf("��������: %d�� %d��\n", man, man * 10000);

	int Ohcheon = Ohcheon1 / 5000;
	int Cheon1 = Ohcheon1 % 5000;
	printf("��õ������: %d�� %d��\n", Ohcheon, Ohcheon * 5000);

	int Cheon = Cheon1 / 1000;
	int Ohbeak1 = Cheon1 % 1000;
	printf("õ������: %d�� %d��\n", Cheon, Cheon * 1000);

	int Ohbeak = Ohbeak1 / 500;
	int beak1 = Ohbeak1 % 500;
	printf("�����¥��: %d�� %d��\n", Ohbeak, Ohbeak * 500);

	int beak = beak1 / 100;
	int Ohsheap1 = beak1 % 100;
	printf("���¥��: %d�� %d��\n", beak, beak * 100);

	int Ohsheap = Ohsheap1 / 50;
	int sheap1 = Ohsheap1 % 50;
	printf("���ʿ�¥��: %d�� %d��\n", Ohsheap, Ohsheap * 50);

	int sheap = sheap1 / 10;
	printf("�ʿ�¥��: %d�� %d��\n", sheap, sheap * 10);

	int no = sheap1 % 10;
	printf("�ٲ��� ���� ��: %d��", no);

	return 0;
}