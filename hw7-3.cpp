#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, result1, result2, result3, result4, dis;
	char ans;

	do{
		printf("��� a�� �Է��Ͻÿ� : ");
		scanf("%lf", &a);
		printf("��� b�� �Է��Ͻÿ� : ");
		scanf("%lf", &b);
		printf("��� c�� �Է��Ͻÿ� : ");
		scanf("%lf", &c);
		
		if (a == 0) {
			result1 = -c / b;
			printf("�� �������� ���� %lf �Դϴ�.\n", result1);
			printf("�� Ȯ�� : %lf \n", (a * result1 * result1) + (b * result1) + c);
		}
		else {
			printf("a=0�� �ƴմϴ�.\n");

			dis = (b * b) - (4 * a * c);
			if (dis > 0) {
				result2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
				printf("�� �������� ���� %lf �Դϴ�.\n", result2);
				printf("�� Ȯ�� : %lf \n", (a * result2 * result2) + (b * result2) + c);

				result3 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
				printf("�� �������� ���� %lf �Դϴ�.\n", result3);
				printf("�� Ȯ�� : %lf \n", (a * result3 * result3) + (b * result3) + c);
			}
			else if (dis < 0) {
				printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
			}
			else if (dis == 0) {
				result4 = -b / (2 * a);
				printf("�� �������� ���� %lf �Դϴ�.\n", result4);
				printf("�� Ȯ�� : %lf \n", (a * result4 * result4) + (b * result4) + c);
			}
		}
	
		printf("��� ��� �ϰڽ��ϱ� <Y/N> ? ");
		scanf(" %c", &ans);

		if (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n') {
			printf("�ٽ� �Է��ϼ���. ��� ��� �ϰڽ��ϱ� <Y/N> ?");
			scanf(" %c", &ans);
		}

	} while (ans == 'Y' || ans == 'y');

	return 0;
}