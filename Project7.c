#include <stdio.h> 

int main(void)
{
	int dollars;
	printf("Enter dollar amount: ");
	scanf("%d", &dollars);

	printf("Lowest number of bills due:\n");
	printf ("$20's: %d\n", dollars / 20);
	dollars = (dollars % 20);
	printf("$10's: %d\n", dollars / 10);
	dollars = (dollars % 10);
	printf("$5's: %d\n", dollars / 5);
	dollars = (dollars % 5);
	printf("$1's: %d\n", dollars / 1);
}
