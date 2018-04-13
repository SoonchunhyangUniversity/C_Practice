#include <stdio.h>

int main()
{
	int input;
	int check = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &input);

	if (input == 0 || input == 1)
	{
		printf("0과 1은 소수가 아닙니다.\n");
		return 0;
	}

	for (int i = 2; i < input; i++)
	{
		if (input % i == 0)
		{
			check = 1;
			break;
		}
	}

	if (check == 0)
		printf("%d은 소수입니다.\n", input);
	else
		printf("%d은 소수가 아닙니다.\n", input);

	return 0;
}
