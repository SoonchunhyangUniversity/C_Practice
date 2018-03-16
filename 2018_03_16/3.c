#include <stdio.h>

int main()
{
	char input;

	printf("대문자 입력 : ");
	scanf("%c", &input);

	printf("소문자 : %c\n", input + 32);

	return 0;
}
