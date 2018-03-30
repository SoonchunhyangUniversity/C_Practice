#include <stdio.h>

int main()
{
	int year;

	printf("연도 : ");
	scanf("%d", &year);

	printf("%s", (year % 4 == 0) && (year % 100 == 0) || (year % 400 == 0) ? "윤년이 아닙니다.\n" : "윤년입니다.\n");

	return 0;
}
