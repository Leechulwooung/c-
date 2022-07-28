#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int vala = 0;
	int valb = 0;
	int valc = 0;  

	printf("Input vala :  ");
	scanf("%d", &vala);
	printf("Input valb :  ");
	scanf("%d", &valb);
	printf("Input Data :  ");
	scanf("%d", &valc);

	if(valc == 1)
		printf("Result = %d\n", vala + valb);
	if(valc == 2)
		printf("Result = %d\n", vala - valb);
	if(valc == 3)
		printf("Result = %d\n", vala * valb);
	if(valc == 4)
		printf("Result = %.2lf\n", (double)vala / valb);

	return 0;
}