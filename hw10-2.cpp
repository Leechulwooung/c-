#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int max) {
	int num;
	num = 1 + (rand() % max);
	return num;
}

void rowAvg(int(*ary)[5], int, int);
void colAvg(int ary[][5], int, int);
void colMin(int(*ary)[5], int, int);
void colMax(int ary[][5], int, int);

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

	printf("The average of each row : \n\n");
	rowAvg(tary, rows, cols);  //void이므로 return 타입이 없다
	printf("\n");

	colAvg(tary, rows, cols);
	printf("\n");

	colMin(tary, rows, cols);
	printf("\n");

	colMax(tary, rows, cols);
	printf("\n");

	return 0;
}

void rowAvg(int(*ary)[5], int rows, int cols) {
	double avg = 0;
	for (int i = 0; i < rows; i++)
	{
		printf("Row %d: ", i);
		avg = 0;                    //for문이 돌고 나서 초기화 되어야한다.
		for (int j = 0; j < cols; j++) {
			printf("\t%d", ary[i][j]);
			avg = avg + ary[i][j];
		}
		avg = avg / cols;
		printf("\t->\t Average %.2lf", avg);
		printf("\n");
	}
}

void colAvg(int ary[][5], int rows, int cols) {

	double avg = 0;

	for (int j = 0; j < cols; j++)
	{
		printf("Column %d: ", j);

		avg = 0;                  //for문이 돌고 나서 초기화 되어야한다.

		for (int i = 0; i < rows; i++) {
			printf("  %d", ary[j][i]);
			avg = avg + ary[j][i];

		}
		
		avg = avg / rows;
		printf("\nAverage %.2lf\t", avg);
		printf("\n");
	}

}

void colMin(int (*ary)[5], int rows, int cols){

	int min;

	for (int j = 0; j < cols; j++)
	{
		printf("Column %d: ", j);

		min = ary[0][0];         //for문이 돌고 나서 초기화 되어야한다.
		for (int i = 0; i < rows; i++) {

			if (ary[j][i] < min) {
				min = ary[j][i];
			}
		}

		printf("MIN value : %d", min);
		printf("\n");
	}
}

void colMax(int ary[][5], int rows, int cols) {

	int max;

	for (int j = 0; j < cols; j++)
	{
		printf("Column %d: ", j);

		max = ary[0][0];         //for문이 돌고 나서 초기화 되어야한다.
		for (int i = 0; i < rows; i++) {
		
			if (ary[j][i] > max) {
				max = ary[j][i];
			}
		}

		printf("MAX value : %d", max);
		printf("\n");
	}
}
