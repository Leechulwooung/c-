#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	double total, tax1, tax2, tax3, tax4, tax5;

	printf("���ռҵ��� �Է��Ͻÿ� : ");
	scanf("%lf", &total);

	//printf("���ռҵ� : %.2lf", total);
	
	if (total <= 12000000) {
		tax1 = 12000000 * 6 / 100;
		printf("�� ���� : %.2lf��\n", tax1);
	}
	else if (total > 12000000 && total <= 46000000) {      //else if(total <= 46000000) �� �����ϴ�.
		tax2 = 720000 + ((total - 12000000) * 15 / 100);
		printf("�� ���� : %.2lf��\n", tax2);
	}
	else if (total > 46000000 && total <= 88000000) {
		tax3 = 5820000 + ((total - 46000000) * 24 / 100);
		printf("�� ���� : %.2lf��\n", tax3);
	}
	else if (total > 88000000 && total <= 300000000) {
		tax4 = 15900000 + ((total - 88000000) * 35 / 100);
		printf("�� ���� : %.2lf��\n", tax4);
	}
	else if(total > 300000000) {
		tax5 = 90100000 + ((total - 300000000) * 35 / 100);
		printf("�� ���� : %.2lf��\n", tax5);
	}
	
	return 0;
}