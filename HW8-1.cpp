#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int limit, num, divisor, count = 0;

	printf("2���� ū���Ѱ� ���� N�� �Է��Ͻÿ� : ");
	scanf("%d", &limit);
	printf("\n2 ���� %d������ �Ҽ���================\n", limit);

	/*
	limit   : 200
	num     :  2                                          3
	divisor :  2    2(�������� 0�� �ƴ� �� true: ���� for���� ��� ����)->3(�������� 0 false: ���� for���� �������ͼ� if������ �Ѿ��. num == divisor ���� -> �Ҽ��̴�(1�� �ڱ��ڽŸ� ������.)
	
	num     :       4
	divisor :  2 -> 3 -> 4 ���� ����� �����ϰ� ���ư��µ� ������ if(num == divisor)�� ������ �ȵǹǷ� 4�� �Ҽ��� �ƴϴ�. ��� ����.
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