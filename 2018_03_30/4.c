#include <stdio.h>

int main()
{
	int max, min;
	int input1, input2, input3, input4, input5;
	//int input[5] = { 0 };

	printf("정수 입력 : ");
	scanf("%d %d %d %d %d", &input1, &input2, &input3, &input4, &input5);
	//scanf("%d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4]);

	max = input1;
	min = input1;

	(input2 > max) ? (max = input2) : 0;
	(input3 > max) ? (max = input3) : 0;
	(input4 > max) ? (max = input4) : 0;
	(input5 > max) ? (max = input5) : 0;

	(input2 < min) ? (min = input2) : 0;
	(input3 < min) ? (min = input3) : 0;
	(input4 < min) ? (min = input4) : 0;
	(input5 < min) ? (min = input5) : 0;
	//max = input[0];
	//min = input[0];
	/*
	for (int i = 0; i < 5; i++)
	{
		((max > input[i]) ? 1 : (max = input[i]));
		((min < input[i]) ? 1 : (min = input[i]));
	}
	*/
	printf("최솟값 : %d, 최댓값 : %d\n", min, max);

	return 0;
}
