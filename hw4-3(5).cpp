#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, max;

	printf("�� ���� ���� �Է� >> ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b;
	max = (c > max) ? c : max;

	printf("���� ū ��: %d", max);

	return 0;
}