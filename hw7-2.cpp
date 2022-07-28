#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int num;

	for(;;){

		printf("피라미드 폭을 입력해 주세요 : ");
		scanf("%d", &num);

		if(num % 2 == 1){
			for (int a = 0; a < num / 2 + 1; a++) {
				for (int b = a; b <= num / 2 - 1; b++) {
					printf(" ");
				}
				for (int b = 0; b < (a * 2) + 1; b++) {
					printf("*");
				}
				printf("\n");
			}
		}
		else if(num % 2 == 0) {
			printf("잘못된 입력입니다. 홀수를 입력해 주세요\n");
		}
		else if (num == -1) {
			break;
		}
	}

	return 0;
}