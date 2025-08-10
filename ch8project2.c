#include <stdio.h>


int main(void)
{
	int digits_seen[10] = {0};
	int revnum[10] = {0};
	int digit1, digit2, i;
	long n, temp1;

	printf("Enter a number:\n");
	scanf("%ld", &n);


	temp1 = n;
	digit1 = 0;
	while (temp1 > 0) {
		revnum[digit1] = temp1 % 10;
		digit1++;
		temp1 /= 10;
	}

	for (i = 0; i < digit1 / 2; i++) {
		int temp = revnum[i];
		revnum[i] = revnum[digit1 - 1 - i];
		revnum[digit1 - 1 - i] = temp;
	}

	printf("Digit:\t\t");
	for (i = 0; i < digit1; i++) {
		printf("%d ", revnum[i]);
	}
	
	while (n > 0) {
		digit2 = n % 10;
		digits_seen[digit2]++;
		n /= 10;
	}

	printf("\n");
	
	printf("Occurences:\t");

	for (i = 0; i < 10; i++) {
		printf("%d ", digits_seen[i]);
	}

	return 0;
}
