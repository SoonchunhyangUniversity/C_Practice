#include <stdio.h>

void addvalue(int arr[], int size, int n, int result[])
{
	int i;

	for (i = 0; i < size; i++)
		result[i] = arr[i] + n;
}

int main()
{
	int arr[] = { 25, 30, 35, 40, 55, 60 };
	int arr2[] = { 0, 0, 0, 0, 0, 0 };
	int i;
	int size = sizeof(arr) / sizeof(int);

	addvalue(arr, size, 5, arr2);

	printf("연산 결과\n");

	for (i = 0; i < size; i++)
	{
		printf("%3d", arr2[i]);
	}

	printf("\n");

	return 0;
}
