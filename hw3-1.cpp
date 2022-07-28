#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int kor, eng, mat, sci;

	printf("국어점수를 입력하세요 : ");
	scanf("%d", &kor);
	printf("국어점수 : %d \n", kor);

	printf("영어점수를 입력하세요 : ");
	scanf("%d", &eng);
	printf("영어점수 : %d \n", eng);

	printf("수학점수를 입력하세요 : ");
	scanf("%d", &mat);
	printf("수학점수 : %d \n", mat);

	printf("과학점수를 입력하세요 : ");
	scanf("%d", &sci);
	printf("과학점수 : %d \n", sci);

	printf("평균 : %.2lf \n", (kor + eng + mat + sci) / 4.0);

	return 0;
}