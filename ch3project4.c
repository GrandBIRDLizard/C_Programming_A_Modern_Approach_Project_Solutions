#include <stdio.h>

int main(void)
{
	int aNum;
	int pNum1;
	int pNum2;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &aNum, &pNum1, &pNum2);

	printf("You entered: %d.%d.%d", aNum, pNum1, pNum2);

	return 0;
}
