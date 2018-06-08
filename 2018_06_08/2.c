#include <stdio.h>
#include <math.h>

int fib(int n)
{
	if (n < 2)
		return n;

	else
		return (fib(n - 1) + fib(n - 2));
}

int main()
{
	int i;

	for (int i = 1; i <= 10; i++)
		printf("%d항 : %.0lf\n", i, pow(-1, i + 1) * fib(i));

	return 0;
}
