#include <stdio.h>

int main()
{
	int iNum;
	int *piNum = &iNum;
	double dNum;
	double *pdNum = &dNum;

	printf("정수 입력 : ");
	scanf("%d", piNum);
	printf("실수 입력 : ");
	scanf("%lf", pdNum);

	printf("포인터를 이용하여 정수형 변수와 실수형 변수의 곱 : %f\n", (*piNum) * (*pdNum));

	return 0;
}
