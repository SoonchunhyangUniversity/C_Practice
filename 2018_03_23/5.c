#include <stdio.h>
#define PI 3.14

int main()
{
	int input;

	printf("원의 반지름 : ");
	scanf("%d", &input);

    printf("원의 둘레 : %f\n", input * 2 * PI);
    printf("원의 넓이 : %f\n", input * input * PI);

	return 0;
}
