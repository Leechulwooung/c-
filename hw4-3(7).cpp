#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int year;
	double total;
	double principle = 1000000;
	const double RATE = 0.045;

	printf("예치 기간 입력(년) >> ");
	scanf("%d", &year);

	total = principle * (1 + RATE * year);
	
	printf("이율 : %.1lf\"%%\"\t", RATE * 100);
	printf("총 금액: %.2lf", total);

	return 0;
}