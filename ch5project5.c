#include <stdio.h>

float tax(float income, float percent, float baseAmnt)
{
	float itax = (percent * income) / 100;
	itax += baseAmnt;
	printf("Amount of tax due: %.2f\n", itax);
	return itax;
}

int main(void)
{
	float income, percent, baseAmnt;

	printf("Enter amount of income: ");
	scanf("%f", &income);

	if (income <= 750) {
		percent = 1;
		baseAmnt = 0;
	} else if (income <= 2250) {
		percent = 2;
		baseAmnt = 7.50;
	} else if (income <= 3750) {
		percent = 3;
		baseAmnt = 37.50;
	} else if (income <= 5250) {
		percent = 4;
		baseAmnt = 82.50;
	} else if (income <= 7000) {
		percent = 5;
		baseAmnt = 142.00;
	} else {  
		percent = 6;
		baseAmnt = 230.00;
	}

	tax(income, percent, baseAmnt);

	return 0;	
}

