#include <stdio.h>

int main()
{
	int input;
	int sum = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &input);

	for (int i = 1; i < input; i++)
		(input % i == 0) ? sum += i : 0;

	(sum == input) ? printf("%d는 완전수입니다.\n", input) : printf("%d는 완전수가 아닙니다.\n", input);

	return 0;
}
