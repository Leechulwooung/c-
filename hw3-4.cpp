#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char univ[20];
	char major[30];
	char blood;
	int age;
	double grade;

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("학교를 입력하세요 : ");
	scanf("%s", univ);
	printf("학과를 입력하세요 : ");
	scanf("%s", major);
	printf("혈액형을 입력하세요 : ");
	scanf(" %c", &blood);
	printf("전학기 평점을 입력하세요 : ");
	scanf("%lf", &grade);

	printf("이철웅님의 나이는 %d세이고 %s %s에 재학중이며 혈액형은 %c이고 학점은 %.2lf입니다.", age, univ, major, blood, grade);

	return 0;
}