#include <stdio.h>

int power(int n, int m)
{
	int result = 1;

	for (int i = 0; i < m; i++)
		result *= n;

	return result;
}

int main()
{
	printf("%d^%d는 %d이다.\n", 2, 3, power(2, 3));
	printf("%d^%d는 %d이다.\n", 4, 5, power(4, 5));

	return 0;
}
