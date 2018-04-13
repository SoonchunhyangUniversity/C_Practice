#include <stdio.h>

int main()
{
	int input;

	printf("정수를 입력하시오 : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		if (input % i == 0)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}
