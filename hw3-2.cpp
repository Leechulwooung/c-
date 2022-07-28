#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define base 7500
#define kw 15.52
#define tax 11.33

int main(void)
{
	int people, month;
	double val1, val2;

	printf("거주자 수를 입력하시오 : ");
	scanf("%d", &people);
	printf("월간 전기 사용량을 입력하세요<kw> : ");
	scanf("%d", &month);

	val1 = month / people;              //1인당 전기 사용량
	val2 = base + (val1 * kw) * tax;    //1인당 전기 사용요금

	printf("1인당 연간 전기 사용요금은 %.2lf원입니다.", val2);

	return 0;
}