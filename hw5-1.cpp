#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double gender, height, weight, stdman, stdwoman, bmi, bmi1, bmi2;

	printf("������ �Է��ϼ���(����:1, ����:2) : ");
	scanf("%lf", &gender);
	printf("������ �Է��ϼ���(cm) : ");
	scanf("%lf", &height);
	printf("ü���� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	//printf("%lf, %lf, %lf\n", gender, height, weight);
	
	if (gender == 1) {
		stdman = (height/100) * (height / 100) * 22;
		printf("���� ǥ�� ü�� : %.2lf\n", stdman);

		bmi = (weight / stdman) * 100;
		printf("������ : %.2lf\n", bmi);

		bmi1 = (weight / stdman) * 100 - 100;
		printf("�񸸵� : %.2lf%%\n", bmi1);

		if (bmi1 >= -10 && bmi1 <= 10){
			printf("����� '����'�Դϴ�.\n");
		}
		else if (bmi1 > 10 && bmi1 <= 20) {  
			printf("����� 'ü�߰���'�Դϴ�.\n");
		}
		else if (bmi1 > 20) {
			printf("����� '��'�Դϴ�.\n");
		}

	}
	else if (gender == 2) {
		stdwoman = (height / 100) * (height / 100) * 21;
		printf("���� ǥ�� ü�� : %.2lf\n", stdwoman);

		bmi = (weight / stdwoman) * 100;
		printf("������ : %.2lf\n", bmi);

		bmi2 = (weight / stdwoman) * 100 - 100;
		printf("�񸸵� : %.2lf%%\n", bmi2);

		if (bmi2 >= -10 && bmi2 <= 10) {
			printf("����� '����'�Դϴ�.\n");
		}
		else if (bmi2 > 10 && bmi2 <= 20) {
			printf("����� 'ü�߰���'�Դϴ�.\n");
		}
		else if (bmi2 > 20) {
			printf("����� '��'�Դϴ�.\n");
		}

	}
	
	return 0;
}