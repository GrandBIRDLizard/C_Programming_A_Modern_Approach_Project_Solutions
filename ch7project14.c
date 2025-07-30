#include <stdio.h>
#include <math.h>

#define EPSILION 0.00001

int main(void)
{
	double x, y = 1, derivx;

	printf("Enter a positive number.\n");
	
	scanf("%lf", &x);
	if (x <= 0) {
		printf("Please enter a positive number");
		return 1;
	}

	while(1) {
		derivx = (y + x / y) / 2;
		
		if (fabs(y - derivx) < (EPSILION * y)) {
			break;
		}
			
		y = derivx;
		printf("Square root: %.10lf\n", y);
	}
	return 0;
}
