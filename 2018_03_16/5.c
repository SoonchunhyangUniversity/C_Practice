#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("세 수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("총합 : %d\n", num1 + num2 + num3);
    printf("평균 : %f\n", (num1 + num2 + num3) / 3.0);

    return 0;
}
