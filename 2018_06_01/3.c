#include <stdio.h>
#define PI 3.14

void circleCalc(double r, double *area, double *circumference)
{
	*area = r * r * PI;
	*circumference = 2 * PI * r;
}

int main()
{
	double r = 5.0;
	double area = 1, circumference = 1;

	circleCalc(r, &area, &circumference);

	printf("반지름이 %.0f인 원의 넓이는 %f 이며, 둘레는 %f이다.\n", r, area, circumference);

	return 0;
}
