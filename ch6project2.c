#include <stdio.h>

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}


int main()
{
	int a, b;

	printf("Enter two numbers to determine GCD\n");
	printf("Number 1: ");
	scanf("%d", &a);
	printf("Number 2: ");
	scanf("%d", &b);

	printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));

	return 0;		
}
