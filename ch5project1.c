#include <stdio.h>

int main(void) 
{
	int number, opt;
	
	printf("Enter number: ");
	scanf("%d", &number);

	opt = (number >= 1000) ? 4 : (number >= 100) ? 3 : (number >= 10) ? 2 : 1;

	printf("The number %d has ", number); 

	switch (opt) {
		case 4:
			printf("4 digits.");
			break;
		case 3:
			printf("3 digits.");
			break;
		case 2:
			printf("2 digits.");
			break;
		case 1:
			printf("1 digit.");
	}

	return 0;

}
