#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double x1, y1, x2, y2, val1, val2;

	printf("��ǥ �Է� : ");
	scanf("%lf %lf", & x1, &y1);

	printf("��ǥ �Է� : ");
	scanf("%lf %lf", & x2, &y2);

	printf("(%.2lf %.2lf), (%.2lf %.2lf)\n", x1, y1, x2, y2);
	
	val1 = (x1 + x2) / 2;
	val2 = (y1 + y2) / 2;

	printf("�߽���ǥ: (%.2lf %.2lf)\n", val1, val2);

	return 0;
}