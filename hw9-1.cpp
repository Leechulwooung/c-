#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int max) {
	int num;
	num = 1 + (rand() % max);
	return num;
}

int main() {

	int ary[100] = { 0 };
	int i, j, count = 0;

	printf("배열 초기화값 출력\n");
	for (i = 0; i < 100; i++) {
		printf("%2d", ary[i]);
	}
	printf("\n\n");

	srand(time(NULL));
	printf("배열의 랜덤값 출력");
	for (i = 0; i < 100; i++) 
	{
		ary[i] = randomNumber(5000);
		if (i % 5 == 0) {
			printf("\n");
		}
		printf("<%d : %d> \t", i, ary[i]);
	}
	printf("\n\n");

	printf("배열의 소수값 출력\n");
	for (i = 2; i < 100; i++) {
		for (j = 2; j < ary[i]; j++) {
			if (ary[i] % j == 0)
				break;
		}
		if (ary[i] == j) {
			printf("<%d : %d>\t%c", i, j, (++count % 5 ? ' ' : '\n'));
		}
	}
	printf("\n\n");

	int max, maxi, min, mini;

	max = ary[0]; maxi = 0;
	min = ary[0]; mini = 0;

	for (i = 0; i < 100; i++)
	{
		if (ary[i] > max) {
			max = ary[i];
			maxi = i;
		}

		if (ary[i] < min) {
			min = ary[i];
			mini = i;
		}
	}
	printf("MAX Value : <%d : %d> \t", maxi, max);
	printf("MIN Value : <%d : %d> \t", mini, min);
	printf("\n");

	return 0;
}