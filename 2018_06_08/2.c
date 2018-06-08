#include <stdio.h>

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
	{
		if (i % 2 == 0)
			printf("%d항 : %d\n", i, -fib(i));

		else
			printf("%d항 : %d\n", i, fib(i));
	}
	return 0;
}
