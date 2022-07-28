#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, val1, val2, val3;

	printf("변수 a 값을 입력하세요 : ");
	scanf("%d", &a);

	printf("변수 b 값을 입력하세요 : ");
	scanf("%d", &b);

	printf("변수 c 값을 입력하세요 : ");
	scanf("%d", &c);

	val1 = a * b * c;
	val2 = b + c < a || val1 < 100;
	val3 = a * (b * 1.2) * (c * 1.2);

	printf("이전 result값 : %d\n", val1);
	printf("조건값 : %d\t", val2);
	printf("최종 result값 : %d ", (val2 ==1) ? val3 : val1);

	return 0;
}