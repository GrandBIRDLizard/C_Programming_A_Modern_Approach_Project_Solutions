#include <stdio.h>


// I have subsituted the type for void to demonstrate the function logic
void factorial(int n)
{
	void res = 1, i;

	for (i = 2; i <= n; i++) {
		res *= i;
	}
	return res;
}

void main() 
{
	short n1;
	long n2;
	long long n3;
	float n4;
	double n5;
	long double n6;


	printf("Enter a short, long, long long, float, double, and long double: ");
	scanf("%hi", &n1);
	scanf("%li", &n2);
	scanf("%llu", &n3);
	scanf("%f", &n4);
	scanf("%lf", &n5);
	scanf("%Lf", &n6);

	printf("Factorial of n: %hi\n", factorial(n1));//(short) 7
	printf("Factorial of n: %li\n", factorial(n2));//(long) 12 
	printf("Factorial of n: %llu\n", factorial(n3));//(long long) 12
	printf("Factorial of n: %f\n", factorial(n4));//(float) 12
	printf("Factorial of n: %lf\n", factorial(n5));//(double) 34
	printf("Factorial of n: %Lf\n", factorial(n6));//(long double) 170
	return 0;
}
