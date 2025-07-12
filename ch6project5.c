#include <stdio.h>

int main(void)
{
	int num, revNum; 

	printf("Enter a number: ");
	scanf("%d", &num);

	revNum = 0;

	do {
		revNum = revNum * 10 + num % 10;
		num = num / 10; 
	} while (num > 0);

	printf("The Reverse is: %d", revNum);
	return 0;
}
