#include <stdio.h> 

int main(void)
{
	int a = 1;
	short b = 2;
	long c = 3; 
	float d = 4.0f;
	double e = 5;
	long double f = 6;

	printf("(int)%lu\n(short)%lu\n(long)%lu\n(float)%lu\n(double)%lu\n(long double)%lu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));

	return 0;
}
