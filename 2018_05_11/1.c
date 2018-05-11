#include <stdio.h>
#include <stdarg.h>

int add(int num, ...)
{
	int result = 0;
	va_list ap;
	int i;

	va_start(ap, num);

	for (i = 0; i < num; i++)
		result += va_arg(ap, int);

	va_end(ap);

	return result;
}

int main()
{
	printf("add(3,1,2,3) 의 반환값 : %d\n", add(3, 1, 2, 3));
	return 0;
}
