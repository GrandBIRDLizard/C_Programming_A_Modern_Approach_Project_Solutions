#include <stdio.h>


int main(void)
{
	int digits_seen[10];
	int digit, nums; 
	long n, i;

	printf("Enter a number:\n");
	scanf("%ld", &n);
	
	while (n > 0) {
		digit = n % 10;
		digits_seen[digit]++;
		n /= 10;
	}
	
	printf("Repeated numbers:\n");
	nums = 0;
	for (n = 0; n < 10; n++) {
		if (digits_seen[n] > 1) {
			printf("%ld ", n);
			nums++;
		}
	}
	if (!nums) {
		printf("No repeats.\n");
	}
	
	return 0;
}
