#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[6] = { 0 };
	int i, j, temp;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++)
	{
		if (i == 0)
			arr[i] = rand() % 10 + 1;

		else
		{
			temp = rand() % 10 + 1;

			for (j = 0; j < i; j++)
			{
				if (arr[j] == temp)
				{
					i = 1;
					break;
				}

				else
					arr[i] = temp;
			}
		}
	}

	for (i = 0; i < 6; i++)
		printf("%4d", arr[i]);

	printf("\n");

	return 0;
}
