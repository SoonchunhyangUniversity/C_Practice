#include <stdio.h>

int main()
{
	int input;

	printf("네자리의 정수 입력 : ");
	scanf("%d", &input);

	printf("일의 자리 : %d\n", ((input % 1000) % 100) % 10);
	printf("십의 자리 : %d\n", ((input % 1000) % 100) / 10);
	printf("백의 자리 : %d\n", ((input % 1000) /100));
	printf("천의 자리 : %d\n", input / 1000);

	return 0;
}
