#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int num;

	printf("�� ���� ���� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (;;) {

		if (num == 0 || num == 1 || num >= 10 || num < -1) {
			printf("��ȿ�� �Է� ���� �ƴմϴ�. �ٽ��Է� �ϼ���\n");
		}
		else if (num >= 2 && num <= 9) {
			for (int n = 1; n <= 9; n++) {
				printf("%d * %d = %d\n", num, n, num * n);
			}
		}
		else if (num == -1) {
			break;
		}

		printf("�� ���� ���� �Է��ϼ��� : ");
		scanf("%d", &num);

	}

	return 0;
}