#include <stdio.h>

int main(void)
{
	int n, nr1, nr2;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);

	nr1 = (n % 10);
	nr2 = (n / 10);

	printf("The reversal is: %d%d\n", nr1, nr2);

	return 0;
}
