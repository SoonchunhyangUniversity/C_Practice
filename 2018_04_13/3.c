#include <stdio.h>
#define TRUE 1

int main()
{
	int answer = 41;
	int count = 0, input;

	do
	{
		printf("정답을 추측하여 보십시오 : ");
		scanf("%d", &input);

		count++;

		if (input == answer)
		{
			printf("축하합니다. 시도횟수는 %d입니다.\n", count);
			break;
		}
		else if (input > answer)
			printf("입력하신 정수가 높습니다.\n");
		else
			printf("입력하신 정수가 낮습니다.\n");
	} while (TRUE);

	return 0;
}
