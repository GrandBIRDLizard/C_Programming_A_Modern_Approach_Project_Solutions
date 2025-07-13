#include <stdio.h> 

int main(void)
{
	float loan, interest, payment, balance;
	int i, np;
	

	printf("Enter loan amount: ");
	scanf("%f", &loan);

	printf("Enter interest rate: "); 
	scanf("%f", &interest);

	printf("Enter amount of monthly payment: ");
	scanf("%f", &payment);
	balance = loan;

	printf("Please enter number of payments: ");
	scanf("%d", &np);
	
	for (i = 0; i < np; i++) {
		balance -= payment;
		balance += (loan * interest / 100.0 / 12.0); 
		printf("Remaining balance: %.2f\n", balance);

	}
	return 0;
}
