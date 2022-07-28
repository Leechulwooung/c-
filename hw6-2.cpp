#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main() {

	double num1, num2;
	char op;

	printf("두개의 실수를 입력 하세요 : ");
	scanf("%lf %lf", &num1, &num2);

	printf("덧셈은 +, 뺄셈은 -, 곱셈은 *, 나눗셈은 /, 제곱은 ^ 선택하세요 : ");
	scanf(" %c", &op);

	switch (op) {
	case '+':
		printf("계산값은 %.2lf입니다.\n", num1 + num2);
		break;

	case '-':
		printf("계산값은 %.2lf입니다.\n", num1 - num2);
		break;

	case '*':
		printf("계산값은 %.2lf입니다.\n", num1 * num2);
		break;

	case '/':
		printf("계산값은 %.2lf입니다.\n", num1 / num2);
		break;

	case '^':
		printf("계산값은 %.2lf입니다.\n", pow(num1, num2));
		break;

	default:
		printf("잘못된 선택을 하셨습니다.\n");
		break;
	}

	return 0;
}