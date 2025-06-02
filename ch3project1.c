#include <stdio.h>

int main(void) 
{
	int day;
	int month;
	int year;

	printf("Enter date for flipping: ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("You entered the date: %4d%02d%2d", year, month, day);
}
