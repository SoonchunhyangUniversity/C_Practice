#include <stdio.h>

int minmax(int n, int m, int flag)
{
	if (flag == 1)
	{
		if (n > m)
			return m;

		else
			return n;
	}

	else if (flag == 2)
	{
		if (n > m)
			return n;

		else
			return m;
	}

	else
		return 0;
}

int main()
{
	printf("minmax(%d, %d, %d)을 호출할 경우 %d를 반환\n", 2, 3, 1, minmax(2, 3, 1));
	printf("minmax(%d, %d, %d)을 호출할 경우 %d를 반환\n", 2, 3, 2, minmax(2, 3, 2));

	return 0;
}
