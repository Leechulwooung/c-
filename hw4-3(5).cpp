#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, max;

	printf("세 개의 정수 입력 >> ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b;
	max = (c > max) ? c : max;

	printf("가장 큰 수: %d", max);

	return 0;
}