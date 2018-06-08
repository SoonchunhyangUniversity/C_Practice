#include <stdio.h>

int minArray(int arr[], int size)
{
	int i;
	int min = arr[0];

	for (i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

int main()
{
	int arr[] = { 5, 3, 2, 6 ,7 };
	int size = sizeof(arr) / sizeof(int);

	printf("{ 5, 3, 2, 6, 7 } 배열에서 가장 작은 값은 %d이다.\n", minArray(arr, size));

	return 0;
}
