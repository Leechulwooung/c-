#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	double total, tax1, tax2, tax3, tax4, tax5;

	printf("종합소득을 입력하시오 : ");
	scanf("%lf", &total);

	//printf("종합소득 : %.2lf", total);
	
	if (total <= 12000000) {
		tax1 = 12000000 * 6 / 100;
		printf("총 세금 : %.2lf원\n", tax1);
	}
	else if (total > 12000000 && total <= 46000000) {      //else if(total <= 46000000) 도 가능하다.
		tax2 = 720000 + ((total - 12000000) * 15 / 100);
		printf("총 세금 : %.2lf원\n", tax2);
	}
	else if (total > 46000000 && total <= 88000000) {
		tax3 = 5820000 + ((total - 46000000) * 24 / 100);
		printf("총 세금 : %.2lf원\n", tax3);
	}
	else if (total > 88000000 && total <= 300000000) {
		tax4 = 15900000 + ((total - 88000000) * 35 / 100);
		printf("총 세금 : %.2lf원\n", tax4);
	}
	else if(total > 300000000) {
		tax5 = 90100000 + ((total - 300000000) * 35 / 100);
		printf("총 세금 : %.2lf원\n", tax5);
	}
	
	return 0;
}