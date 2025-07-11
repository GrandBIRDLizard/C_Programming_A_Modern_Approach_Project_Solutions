#include <stdio.h> 

int gcd(int a, int b)
{
	if (a == b)
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
	int numerator, denominator, lowestN, lowestD;
	printf("Enter a fraction (x/y): ");
	scanf("%d/%d", &numerator, &denominator);
	
	lowestN = (numerator / gcd(numerator, denominator));
	lowestD = (denominator / gcd(numerator, denominator));	

	printf("Fraction in lowest terms: %d/%d\n", lowestN, lowestD);

	return 0;
	
}
