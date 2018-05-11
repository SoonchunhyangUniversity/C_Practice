#include <stdio.h>

int func()
{
	int static count = 0;

	count++;

	if (count % 2 == 0)
		return 0;

	else
		return 1;
}

int main()
{
	printf("첫번째 호출 반환값 : %d\n", func());
	printf("두번째 호출 반환값 : %d\n", func());
	printf("세번째 호출 반환값 : %d\n", func());

	return 0;
}
