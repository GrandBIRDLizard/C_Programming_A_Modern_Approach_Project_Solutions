#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter Number between 0 and 32767: ");
	scanf("%d", &num);
	
	printf("In octal, your number is: %d%d%d%d%d\n", (num/4096)%8, (num/512)%8, (num/64)%8, (num/8)%8, num%8);

	return 0;
}
