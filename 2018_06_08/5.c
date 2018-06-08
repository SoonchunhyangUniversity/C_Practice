#include <stdio.h>

int main()
{
	double avg[10] = { 0 };
	double temp;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		printf("%d번째 학생 평균 : ", i + 1);
		scanf("%lf", &avg[i]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (avg[i] < avg[j])
			{
				temp = avg[i];
				avg[i] = avg[j];
				avg[j] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d등 %lf\n", i + 1, avg[i]);

	return 0;
}
