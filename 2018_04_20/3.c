#include <stdio.h>

int main()
{
	int input1, input2, temp;
	int result = 0;
	int input1_temp, input2_temp;

	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &input1, &input2);

	input1_temp = input1;
	input2_temp = input2;

	if (input2_temp > input1_temp)
	{
		while ((input2_temp % input1_temp) != 0)
		{
			result = input2_temp % input1_temp;
			input2_temp = input1_temp;
			input1_temp = result;
		}
	}
	else
	{
		input1_temp = temp;
		input1_temp = input2_temp;
		input2_temp = temp;

		while ((input2_temp % input1_temp) != 0)
		{
			result = input2_temp % input1_temp;
			input2_temp = input1_temp;
			input1_temp = result;
		}
	}

	if (result == 1)
		printf("%d와 %d는 서로 소입니다.\n", input1, input2);
	else
		printf("%d와 %d는 서로 소가 아닙니다.\n", input1, input2);

	return 0;
}
