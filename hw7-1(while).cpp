#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int num;
	int n = 1;

	printf("�� ���� ���� �Է��ϼ��� : ");
	scanf("%d", &num);

	while (1) {

		if (num == 0 || num == 1 || num >= 10) {
				printf("��ȿ�� �Է� ���� �ƴմϴ�. �ٽ��Է��ϼ���\n");
		}
		else if(num >= 2 && num <=9) {
			while (n <= 9){
				printf("%d * %d = %d\n", num, n, num * n);
				n++;
			}
			n = 1;
		}
		else if(num == -1) {
			break;
		}

		printf("�� ���� ���� �Է��ϼ��� : ");
		scanf("%d", &num);
	}

	return 0;
}