#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int month;

	printf("�� (1���� 12����) �Է��Ͻÿ� : ");
	scanf("%d", &month);
	/*
	if (month < 0 || month > 12) {
		printf("���� �� �� �Է��߽��ϴ�.\n");
		return 0;
	}
	*/
	switch (month) {

	case 1: case 2: case 3:
		printf("%d���� 1��б� �Դϴ�.\n", month);
		break;

	case 4: case 5: case 6:
		printf("%d���� 2��б� �Դϴ�.\n", month);
		break;

	case 7: case 8: case 9:
		printf("%d���� 3��б� �Դϴ�.\n", month);
		break;

	case 10: case 11: case 12:
		printf("%d���� 4��б� �Դϴ�.\n", month);
		break;
		/*
	default:
		printf("���� �� �� �Է��߽��ϴ�.\n");
		break;
*/
	}
	return 0;
}