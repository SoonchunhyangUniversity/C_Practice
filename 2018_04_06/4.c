#include <stdio.h>

int main()
{
	int input;
	int result = 0;

	printf("정수 입력 : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		int temp = 1;

		for (int j = 1; j <= i; j++)
		{
			temp *= i;
		}
		result += temp;
	}

	printf("계산 결과 : %d\n", result);

	return 0;
}
