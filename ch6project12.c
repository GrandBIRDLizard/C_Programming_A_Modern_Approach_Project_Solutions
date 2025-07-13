#include <stdio.h>

int main()
{
	int n = 1;
	double epsilon;
	double e = 1.0;
	double factorial = 1.0;
	double term = 1.0;


	printf("Enter a small balue for epsilon: "); 
	scanf("%lf", &epsilon);

	while (term >= epsilon) {
		factorial *= n;
		term = 1.0 / factorial;
		e += term;
		n++;
	}

	printf("Approximation of e: %.15f\n", e);
	printf("Number of terms used: %d\n", n);
	return 0;
}
