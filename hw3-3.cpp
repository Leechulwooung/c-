#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int mmin, m, cm, cm1, mm;

	printf("밀리미터를 입력하세요 : ");
	scanf("%d", &mmin);

	m = mmin / 1000;
	cm1 = mmin % 1000; //mmin 을 1000으로 나눈 나머지
	cm = cm1 / 10;
	mm = cm1 % 10;     //cm1을 10으로 나눈 나머지

	printf("%d밀리미터는 %d미터, %d센티미터, %d밀리미터입니다.", mmin, m, cm, mm);

	return 0;
}