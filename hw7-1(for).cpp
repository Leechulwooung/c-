#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int num;

	printf("한 개의 단을 입력하세요 : ");
	scanf("%d", &num);

	for (;;) {

		if (num == 0 || num == 1 || num >= 10 || num < -1) {
			printf("유효한 입력 값이 아닙니다. 다시입력 하세요\n");
		}
		else if (num >= 2 && num <= 9) {
			for (int n = 1; n <= 9; n++) {
				printf("%d * %d = %d\n", num, n, num * n);
			}
		}
		else if (num == -1) {
			break;
		}

		printf("한 개의 단을 입력하세요 : ");
		scanf("%d", &num);

	}

	return 0;
}