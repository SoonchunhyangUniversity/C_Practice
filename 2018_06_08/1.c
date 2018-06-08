#include <stdio.h>

int min(int x, int y)
{
	return (x < y) ? x : y;
}

int minArray(int arr[], int size)
{
	if (size == 1)
		return arr[0];

	else
		return min(arr[size - 1], minArray(arr, size - 1));
}

int main()
{
	int arr[] = { 5, 3, 2, 6 ,7 };
	int size = sizeof(arr) / sizeof(int);

	printf("{ 5, 3, 2, 6, 7 } 배열에서 가장 작은 값은 %d이다.\n", minArray(arr, size));

	return 0;
}
