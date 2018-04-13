#include <stdio.h>

int main()
{
	int num_high, num_low;
	int result;

	printf("두개의 정수를 입력하시오(큰수, 작은수) : ");
	scanf("%d %d", &num_high, &num_low);

	while ((num_high % num_low) != 0)
	{
		result = num_high % num_low;
		num_high = num_low;
		num_low = result;
	}

	printf("최대 공약수는 %d입니다.\n", result);

	return 0;
}
