#include <stdio.h>

void divideNumber(int num, int *n1000, int *n100, int *n10, int *n1)
{
	*n1000 = num / 1000;
	num %= 1000;

	*n100 = num / 100;
	num %= 100;

	*n10 = num / 10;
	num %= 10;

	*n1 = num;
}

int main()
{
	int num = 4321;
	int n1000, n100, n10, n1;

	divideNumber(num, &n1000, &n100, &n10, &n1);

	printf("%d에서 천의 자리는 %d, 백의 자리는 %d, 십의 자리는 %d, 일의 자리는 %d입니다.\n", num, n1000, n100, n10, n1);

	return 0;
}
