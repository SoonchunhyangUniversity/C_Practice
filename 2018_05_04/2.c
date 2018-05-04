#include <stdio.h>

int isLeapYear(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

int main()
{
	if (isLeapYear(2016))
		printf("2016년은 윤년입니다.\n");
	else
		printf("2016년은 윤년이 아닙니다.\n");

	if (isLeapYear(2018))
		printf("2018년은 윤년입니다.\n");
	else
		printf("2018년은 윤년이 아닙니다.\n");

	return 0;
}
