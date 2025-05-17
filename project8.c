#include <stdio.h> 

int main(void)
{
	float loan, interest, payment, balance;
	int i;
	

	printf("Enter loan amount: ");
	scanf("%f", &loan);
	printf("Enter interest rate: "); 
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	balance = loan;
	

	for (i = 0; i < 3; i++) {
		balance -= payment;
		balance += (loan * interest / 100.0 / 12.0); 
		printf("Remaining balance: %.2f\n", balance);

	}
	return 0;
}
