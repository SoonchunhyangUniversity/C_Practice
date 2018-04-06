#include <stdio.h>

int main()
{
	int num1, num2;
	int even_sum = 0, odd_sum = 0;

	printf("두 수 입력 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		for (; num2 <= num1; num2++)
		{
			if (!(num2 % 2))
				even_sum += num2;
			else
				odd_sum += num2;
		}
		printf("홀수 합 : %d\n짝수 합 : %d\n", odd_sum, even_sum);
	}
	else
	{
		for (; num1 <= num2; num1++)
		{
			if (!(num1 % 2))
				even_sum += num2;
			else
				odd_sum += num2;

		}
		printf("홀수 합 : %d\n짝수 합 : %d\n", odd_sum, even_sum);
	}

	return 0;
}
