#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, result1, result2, result3, result4, dis;
	char ans;

	do{
		printf("계수 a를 입력하시오 : ");
		scanf("%lf", &a);
		printf("계수 b를 입력하시오 : ");
		scanf("%lf", &b);
		printf("계수 c를 입력하시오 : ");
		scanf("%lf", &c);
		
		if (a == 0) {
			result1 = -c / b;
			printf("이 방정식의 근은 %lf 입니다.\n", result1);
			printf("근 확인 : %lf \n", (a * result1 * result1) + (b * result1) + c);
		}
		else {
			printf("a=0이 아닙니다.\n");

			dis = (b * b) - (4 * a * c);
			if (dis > 0) {
				result2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
				printf("이 방정식의 근은 %lf 입니다.\n", result2);
				printf("근 확인 : %lf \n", (a * result2 * result2) + (b * result2) + c);

				result3 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
				printf("이 방정식의 근은 %lf 입니다.\n", result3);
				printf("근 확인 : %lf \n", (a * result3 * result3) + (b * result3) + c);
			}
			else if (dis < 0) {
				printf("실근이 존재하지 않습니다.\n");
			}
			else if (dis == 0) {
				result4 = -b / (2 * a);
				printf("이 방정식의 근은 %lf 입니다.\n", result4);
				printf("근 확인 : %lf \n", (a * result4 * result4) + (b * result4) + c);
			}
		}
	
		printf("계속 계산 하겠습니까 <Y/N> ? ");
		scanf(" %c", &ans);

		if (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n') {
			printf("다시 입력하세요. 계속 계산 하겠습니까 <Y/N> ?");
			scanf(" %c", &ans);
		}

	} while (ans == 'Y' || ans == 'y');

	return 0;
}