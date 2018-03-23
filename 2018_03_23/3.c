#include <stdio.h>

int main()
{
	double input;

	printf("실수 입력 : ");
	scanf("%lf", &input);

	printf("결과 %d, %0.6f\n", (int)input, input - (int)input);

	return 0;
}
