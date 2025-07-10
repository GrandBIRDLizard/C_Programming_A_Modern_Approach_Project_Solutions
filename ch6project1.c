#include <stdio.h>

int main(void)
{
	int num, greatest; 

	printf("This program determines the largest integer entered.\n");
	printf("Enter integers (0 to terminate): ");
	
	greatest = 0;

	scanf("%d", &num);

	while (num != 0) {
		if (num > greatest) {
			greatest = num;
			continue;		
		}
		scanf("%d", &num);
	}
	printf("The greatest integer entered was: %d\n", greatest);

	return 0;
}
