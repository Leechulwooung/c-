#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double gender, height, weight, stdman, stdwoman, bmi, bmi1, bmi2;

	printf("성별을 입력하세요(남자:1, 여자:2) : ");
	scanf("%lf", &gender);
	printf("신장을 입력하세요(cm) : ");
	scanf("%lf", &height);
	printf("체중을 입력하세요(kg) : ");
	scanf("%lf", &weight);
	//printf("%lf, %lf, %lf\n", gender, height, weight);
	
	if (gender == 1) {
		stdman = (height/100) * (height / 100) * 22;
		printf("남자 표준 체중 : %.2lf\n", stdman);

		bmi = (weight / stdman) * 100;
		printf("비만지수 : %.2lf\n", bmi);

		bmi1 = (weight / stdman) * 100 - 100;
		printf("비만도 : %.2lf%%\n", bmi1);

		if (bmi1 >= -10 && bmi1 <= 10){
			printf("당신은 '정상'입니다.\n");
		}
		else if (bmi1 > 10 && bmi1 <= 20) {  
			printf("당신은 '체중과다'입니다.\n");
		}
		else if (bmi1 > 20) {
			printf("당신은 '비만'입니다.\n");
		}

	}
	else if (gender == 2) {
		stdwoman = (height / 100) * (height / 100) * 21;
		printf("여자 표준 체중 : %.2lf\n", stdwoman);

		bmi = (weight / stdwoman) * 100;
		printf("비만지수 : %.2lf\n", bmi);

		bmi2 = (weight / stdwoman) * 100 - 100;
		printf("비만도 : %.2lf%%\n", bmi2);

		if (bmi2 >= -10 && bmi2 <= 10) {
			printf("당신은 '정상'입니다.\n");
		}
		else if (bmi2 > 10 && bmi2 <= 20) {
			printf("당신은 '체중과다'입니다.\n");
		}
		else if (bmi2 > 20) {
			printf("당신은 '비만'입니다.\n");
		}

	}
	
	return 0;
}