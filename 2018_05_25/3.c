#include <stdio.h>

void addArray(int arr[], int size, int arr2[], int result[])
{
	int i;

	for (i = 0; i < size; i++)
		result[i] = arr[i] + arr2[i];
}

int main()
{
	int arr[] = { 25, 30, 35, 40, 55, 60 };
	int arr2[] = { 60, 50, 45, 55, 20, 30 };
	int result[] = { 0, 0, 0, 0, 0, 0 };
	int i;
	int size = sizeof(arr) / sizeof(int);

	addArray(arr, size, arr2, result);

	printf("연산 결과\n");

	for (i = 0; i < size; i++)
	{
		printf("%3d", result[i]);
	}

	printf("\n");

	return 0;
}
