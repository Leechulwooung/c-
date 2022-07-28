#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num;
	int n = 1;

	printf("한 개의 단을 입력하세요 : ");
	scanf("%d", &num);

	do{
		
		if (num == 0 || num == 1 || num >= 10) {
			printf("유효한 입력 값이 아닙니다. 다시입력 하세요\n");
		}
		else if (num >= 2 && num <= 9) {
			do {
				printf("%d * %d = %d\n", num, n, num * n);
				n++;
			} while(n <= 9);
			n = 1;
		}
		else if (num == -1) {
			break;
		}

		printf("한 개의 단을 입력하세요 : ");
		scanf("%d", &num);

	} while (1);

	return 0;
}