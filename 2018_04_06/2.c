#include <stdio.h>

int main()
{
	int num1, num2;
	int sum = 0;

	printf("두 수 입력 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		for (; num2 <= num1; num2++)
			sum += num2;

		printf("합 : %d\n", sum);
	}
	else
	{
		for (; num1 <= num2; num1++)
			sum += num1;

		printf("합 : %d\n", sum);
	}

	return 0;
}
