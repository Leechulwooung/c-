#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int num;

	for(;;){

		printf("�Ƕ�̵� ���� �Է��� �ּ��� : ");
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
			printf("�߸��� �Է��Դϴ�. Ȧ���� �Է��� �ּ���\n");
		}
		else if (num == -1) {
			break;
		}
	}

	return 0;
}