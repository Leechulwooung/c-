#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double x = 5, y = 5, z;

	for (x = 5; x <= 10; x += 0.5)
	{
		for (y = 5; y <= 10; y += 0.5)
		{
			z = 3 * x * x * y + 2 * x * x + y + 5;
			if (z >= 2000){
				continue;
			}
			printf("x=%.2lf, y=%.2lf 일때, z=%.2lf\n", x, y, z);
		}
		y = 5;        //y=5로 초기화
	}


	return 0;
}