#include <stdio.h>

int mult(int n, int m)
{
	return n * m;
}

int main()
{
	printf("%d X %d = %d\n", 2, 5, mult(2, 5));
	printf("%d X %d = %d\n", 3, 4, mult(3, 4));

	return 0;
}
