#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main() {

	double num1, num2;
	char op;

	printf("�ΰ��� �Ǽ��� �Է� �ϼ��� : ");
	scanf("%lf %lf", &num1, &num2);

	printf("������ +, ������ -, ������ *, �������� /, ������ ^ �����ϼ��� : ");
	scanf(" %c", &op);

	switch (op) {
	case '+':
		printf("��갪�� %.2lf�Դϴ�.\n", num1 + num2);
		break;

	case '-':
		printf("��갪�� %.2lf�Դϴ�.\n", num1 - num2);
		break;

	case '*':
		printf("��갪�� %.2lf�Դϴ�.\n", num1 * num2);
		break;

	case '/':
		printf("��갪�� %.2lf�Դϴ�.\n", num1 / num2);
		break;

	case '^':
		printf("��갪�� %.2lf�Դϴ�.\n", pow(num1, num2));
		break;

	default:
		printf("�߸��� ������ �ϼ̽��ϴ�.\n");
		break;
	}

	return 0;
}