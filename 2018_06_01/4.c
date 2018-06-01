#include <stdio.h>

void minmax(int *arr, int size, int *min, int *max)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (*(arr+i) > *max)
			*max = *(arr + i);

		else
			*min = *(arr + i);
	}
}

int main()
{
	int arr[] = { 5, 3, 2, 6, 7 };
	int i, len = sizeof(arr) / sizeof(arr[0]);
	int min = arr[0];
	int max = arr[0];

	minmax(arr, len, &min, &max);

	printf("{ ");

	for (i = 0; i < len; i++)
		printf(" %d,", arr[i]);

	printf(" } 배열에 가장 큰 값은 %d이며, 가장 작은 값은 %d이다.\n", max, min);

	return 0;
}
