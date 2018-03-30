#include <stdio.h>

int main()
{
	int xpos, ypos;

	printf("x와 y좌표 입력 : ");
	scanf("%d %d", &xpos, &ypos);

	printf("%s", ((xpos >= 1 && ypos >= 1) ? "1사분면\n" : (xpos < 0 && ypos >= 1) ? "2사분면\n" : (xpos < 0 && ypos < 0) ? "3사분면\n" : "4사분면\n"));

	return 0;
}
