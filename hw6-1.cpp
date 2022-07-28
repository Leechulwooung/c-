#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int month;

	printf("월 (1에서 12사이) 입력하시오 : ");
	scanf("%d", &month);
	/*
	if (month < 0 || month > 12) {
		printf("월을 잘 못 입력했습니다.\n");
		return 0;
	}
	*/
	switch (month) {

	case 1: case 2: case 3:
		printf("%d월은 1사분기 입니다.\n", month);
		break;

	case 4: case 5: case 6:
		printf("%d월은 2사분기 입니다.\n", month);
		break;

	case 7: case 8: case 9:
		printf("%d월은 3사분기 입니다.\n", month);
		break;

	case 10: case 11: case 12:
		printf("%d월은 4사분기 입니다.\n", month);
		break;
		/*
	default:
		printf("월을 잘 못 입력했습니다.\n");
		break;
*/
	}
	return 0;
}