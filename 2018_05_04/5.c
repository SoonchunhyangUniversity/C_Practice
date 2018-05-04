#include <stdio.h>

int isPrimeNumber(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	if (isPrimeNumber(2))
		printf("%d는 소수이다.\n", 2);
	else
		printf("%d는 소수가 아니다.\n", 2);

	if (isPrimeNumber(6))
		printf("%d는 소수이다.\n", 6);
	else
		printf("%d는 소수가 아니다.\n", 6);

	return 0;
}
