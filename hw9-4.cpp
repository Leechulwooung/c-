#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int max) {
	int num;
	num = 1 + (rand() % max);
	return num;
}

int main() {

	const int rows = 20;
	const int cols = 5;
	const int range = 1000;

	int tary[rows][cols] = { 0 };
	int i, j;

	srand(time(NULL));
	printf("The Array After Assigning Number\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++) {
			tary[i][j] = randomNumber(range);
			printf("%d \t", tary[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int(*ptary)[5];
	ptary = tary;

	double avg = 0;

	printf("The average of each row : \n\n");
	for (i = 0; i < rows; i++)
	{
		printf("Row %d: ", i);
		avg = 0;                    //for문이 돌고 나서 초기화 되어야한다.
		for (j = 0; j < cols; j++) {
			printf("\t%d", ptary[i][j]);
			avg = avg + ptary[i][j];
		}
		avg = avg / cols;
		printf("\t->\t Average %.2lf", avg);
		printf("\n");
	}

	int max, min;

	for (j = 0; j < cols; j++)
	{
		printf("Column %d: ", j);
		avg = 0;                  //for문이 돌고 나서 초기화 되어야한다.
		max = ptary[0][0];         //for문이 돌고 나서 초기화 되어야한다.
		min = ptary[0][0];         //for문이 돌고 나서 초기화 되어야한다.
		for (i = 0; i < rows; i++) {
			printf("  %d", ptary[j][i]);
			avg = avg + ptary[j][i];

			if (ptary[j][i] > max) {
				max = ptary[j][i];
			}

			if (ptary[j][i] < min) {
				min = ptary[j][i];
			}
		}
		avg = avg / rows;
		printf("\nAverage %.2lf\t MIN value : %d\t  MAX value : %d\n", avg, min, max);
		printf("\n");
	}
	return 0;
}