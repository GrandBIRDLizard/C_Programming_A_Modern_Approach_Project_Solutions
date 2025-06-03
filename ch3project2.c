#include <stdio.h>

int main(void)
{
	int iNum, month, day, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &iNum);

	printf("Enter unit price: ");
	scanf("%f", &price);

	if (price > 9999.99) {
		printf("Maximum amount $9999.99. Please try again");
		scanf("%f", &price);
	}
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%-d\t$%2.2f\t%d/%02d/%d", iNum, price, month, day, year);

	return 0;	
}
