#include <stdio.h>

int main()
{
	int input;
	int count = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++)
		(input % i == 0) ? count++ : 0;

	printf("%d의 약수 개수는 %d개 입니다.\n", input, count);

	return 0;
}
