#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, val1, val2, val3;

	printf("���� a ���� �Է��ϼ��� : ");
	scanf("%d", &a);

	printf("���� b ���� �Է��ϼ��� : ");
	scanf("%d", &b);

	printf("���� c ���� �Է��ϼ��� : ");
	scanf("%d", &c);

	val1 = a * b * c;
	val2 = b + c < a || val1 < 100;
	val3 = a * (b * 1.2) * (c * 1.2);

	printf("���� result�� : %d\n", val1);
	printf("���ǰ� : %d\t", val2);
	printf("���� result�� : %d ", (val2 ==1) ? val3 : val1);

	return 0;
}