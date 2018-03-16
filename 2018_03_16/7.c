#include <stdio.h>

int main()
{
	int width, height;

	printf("사각형의 가로 : ");;
	scanf("%d", &width);
	printf("사각형의 세로 : ");
	scanf("%d", &height);

	printf("둘레 : %d, 넓이 : %d\n", 2 * width + 2 * height, width * height);

	return 0;
}
