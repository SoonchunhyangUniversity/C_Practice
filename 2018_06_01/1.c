#include <stdio.h>

void sum(int n, int m, int *odd, int *even)
{
	int i;

	for (i = n; i <= m; i++)
	{
		if (i % 2 == 0)
			*even += i;

		else
			*odd += i;
	}
}

int main()
{
	int n = 1, m = 10;
	int odd_result = 0, even_result = 0;

	sum(n, m, &odd_result, &even_result);

	printf("%d부터 %d까지의 홀수의 합은 %d 짝수의 합은 %d입니다.\n", n, m, odd_result, even_result);

	return 0;
}
