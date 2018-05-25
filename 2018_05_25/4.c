#include <stdio.h>

int main()
{
	int iNum;
	int *piNum;
	double dNum;
	double *pdNum;

	printf("정수 입력 : ");
	scanf("%d", &iNum);
	printf("실수 입력 : ");
	scanf("%lf", &dNum);

	piNum = &iNum;
	pdNum = &dNum;

	printf("포인터를 이용하여 정수형 변수와 실수형 변수의 곱 : %f\n", (*piNum) * (*pdNum));

	return 0;
}
