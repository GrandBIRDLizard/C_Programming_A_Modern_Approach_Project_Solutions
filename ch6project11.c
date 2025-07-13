#include <stdio.h>

int main()
{
	int n, i;
	double e = 1.0;
	double factorial = 1.0;

	printf("Enter for terms in approximation of e: "); 
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		factorial *= i;
		e += (1.0 / factorial);
	}

	printf("Approximation of e in %d terms: %0.15f\n", n, e);
	return 0;
}
