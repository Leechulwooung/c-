#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int amount;

	printf("금액을 입력하세요 : ");
	scanf("%d", &amount);

	int Ohman = amount / 50000;
	int man1 = amount % 50000;
	printf("오만원지폐: %d개 %d원\n", Ohman, Ohman*50000);

	int man = man1 / 10000;
	int Ohcheon1 = man1 % 10000;
	printf("만원지폐: %d개 %d원\n", man, man * 10000);

	int Ohcheon = Ohcheon1 / 5000;
	int Cheon1 = Ohcheon1 % 5000;
	printf("오천원지폐: %d개 %d원\n", Ohcheon, Ohcheon * 5000);

	int Cheon = Cheon1 / 1000;
	int Ohbeak1 = Cheon1 % 1000;
	printf("천원지폐: %d개 %d원\n", Cheon, Cheon * 1000);

	int Ohbeak = Ohbeak1 / 500;
	int beak1 = Ohbeak1 % 500;
	printf("오백원짜리: %d개 %d원\n", Ohbeak, Ohbeak * 500);

	int beak = beak1 / 100;
	int Ohsheap1 = beak1 % 100;
	printf("백원짜리: %d개 %d원\n", beak, beak * 100);

	int Ohsheap = Ohsheap1 / 50;
	int sheap1 = Ohsheap1 % 50;
	printf("오십원짜리: %d개 %d원\n", Ohsheap, Ohsheap * 50);

	int sheap = sheap1 / 10;
	printf("십원짜리: %d개 %d원\n", sheap, sheap * 10);

	int no = sheap1 % 10;
	printf("바꾸지 못한 돈: %d원", no);

	return 0;
}