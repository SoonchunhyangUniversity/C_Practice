#include <stdio.h>

void gcdlcm(int n1, int n2, int *gcd, int *lcm)
{
	int num_high, num_low;

	if (n1 > n2)
	{
		num_high = n1;
		num_low = n2;
	}

	else
	{
		num_high = n2;
		num_low = n1;
	}

	while ((num_high % num_low) != 0)
	{
		*gcd = num_high % num_low;
		num_high = num_low;
		num_low = *gcd;
	}

	*lcm = (n1 / *gcd) * (n2 / *gcd) * (*gcd);
}

int main()
{
	int n1 = 60, n2 = 48;
	int gcd, lcm;

	gcdlcm(n1, n2, &gcd, &lcm);

	printf("%d와 %d의 최대공약수는 %d이고, 최소공배수는 %d이다.\n", n1, n2, gcd, lcm);

	return 0;
}
