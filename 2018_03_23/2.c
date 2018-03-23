#include <stdio.h>

int main()
{
    int num1, num2;

    printf("두 수 입력 : ");
    scanf("%d %d", &num1, &num2);

    printf("몫 : %d, 나머지 %d\n", num1 / num2, num1 % num2);

    return 0;
}
