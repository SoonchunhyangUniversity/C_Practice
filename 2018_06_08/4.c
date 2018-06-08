#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[20] = { 0 };
	int count[11] = { 0 };
	int i, input;

	srand((unsigned)time(NULL));

	for (i = 0; i < 20; i++)
	{
		arr[i] = rand() % 10 + 1;
		count[arr[i]]++;
	}

	for (i = 0; i < 20; i++)
		printf("%4d", arr[i]);

	printf("\n");

	printf("검색할 정수 입력 : ");
	scanf("%d", &input);

	printf("배열에서 %d는 %d번 나왔습니다.\n", input, count[input]);

	return 0;
}
