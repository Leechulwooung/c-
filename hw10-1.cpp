#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int max) {
	int num;
	num = 1 + (rand() % max);
	return num;
}

void printArray(int* arry, int size);
void randomInputArray(int* arry, int range, int size);
int MAX(int* arry, int size);
int MIN(int* arry, int size);

int main() {

	int size = 100;
	int ary[100] = { 0 };
	
	printf("배열 초기화값 출력\n");
	printArray(ary, size);
	
	srand(time(NULL));
	
	randomInputArray(ary, 300, 100);

	printf("배열의 랜덤값 출력\n");
	printArray(ary, size);

	int max_i = MAX(ary, size);

	int min_i = MIN(ary, size);

	printf("MAX Value : <%d : %d> \t", max_i, ary[max_i]);
	printf("MIN Value : <%d : %d> \t", min_i, ary[min_i]);
	printf("\n");

	return 0;
}

void printArray(int* arry, int size) {
	for (int i = 0; i < 100; i++)
	{
		printf("<%d : %d> \t", i, arry[i]);
	}
	printf("\n\n");
}

void randomInputArray(int* arry, int range, int size) {
	for (int i = 0; i < size; i++)
	{
		arry[i] = randomNumber(range);
	}
	printf("\n\n");
}

int MAX(int* arry, int size) {
	int max, maxi;

	max = arry[0]; maxi = 0;

	for (int i = 0; i < size; i++)
	{
		if (arry[i] > max) {
			max = arry[i];
			maxi = i;
		}
	}
	return maxi;
}

int MIN(int* arry, int size) {
	int min, mini;

	min = arry[0]; mini = 0;

	for (int i = 0; i < 100; i++)
	{
		if (arry[i] < min) {
			min = arry[i];
			mini = i;
		}
	}
	return mini;
}
