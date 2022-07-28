#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int limit, num, divisor, count = 0;

	printf("2보다 큰상한값 정수 N을 입력하시오 : ");
	scanf("%d", &limit);
	printf("\n2 부터 %d까지의 소수는================\n", limit);

	/*
	limit   : 200
	num     :  2                                          3
	divisor :  2    2(나머지가 0이 아닌 수 true: 안쪽 for문이 계속 돈다)->3(나머지가 0 false: 안쪽 for문을 빠져나와서 if문으로 넘어간다. num == divisor 성립 -> 소수이다(1과 자기자신만 가진다.)
	
	num     :       4
	divisor :  2 -> 3 -> 4 위의 방법과 동일하게 돌아가는데 마지막 if(num == divisor)가 성립이 안되므로 4는 소수가 아니다. 출력 안함.
	*/

	for (num = 2; num <= limit; num++) {

		for (divisor = 2; num % divisor; divisor++);

		if (num == divisor) {
			printf("%3d%c", num, (++count % 10 ? ' ' : '\n'));
		}
		if (count >= 50) {
			break;
		}
		
	}
	return 0;
}