#include <stdio.h> 

int main(void)
{
	int i, days, startDay;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter day of the week (1 = Sun, 7 = Sat): ");
	scanf("%d", &startDay);

	for (i = 1; i < startDay; i++) {
		printf("\t");
	}

	for (i = 1; i <= days; i++, startDay++) {
		printf("\t%2d", i);
		if (startDay == 7) {
			printf("\n");
			startDay = 0;
		}
	}

	return 0;
}
