#include <stdio.h>

int main()
{
	int input;
	int sum = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &input);

	for (int i = 1; i < input; i++)
		(i % 3 == 0 || i % 5 == 0) ? sum += i : 0;

	printf("3 또는 5의 배수를 더한 합은 %d입니다.\n", sum);

	return 0;
}
