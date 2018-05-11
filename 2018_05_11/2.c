#include <stdio.h>

void func()
{
	int static count = 0;

	count++;
	printf("func() 함수는 %d번 호출됨\n", count);
}

int main()
{
	func();
	func();
	func();

	return 0;
}
