#include <stdio.h>

int main()
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	printf("2배 : %d, 4배 : %d\n", num << 1, num << 2);

	return 0;
}
