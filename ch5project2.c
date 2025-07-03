#include <stdio.h>

int main(void)
{
	int hrs, mins, am, pm, convert;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hrs, &mins);
	convert = hrs;	

	switch (convert) {
		case 13: 
			hrs = 1; 
			break;
		case 14:
			hrs = 2;
			break;
		case 15:
			hrs = 3;
			break;
		case 16:
			hrs = 4;
			break;
		case 17:
			hrs = 5;
			break;
		case 18:
			hrs = 6;
			break;
		case 19:
			hrs = 7;
			break;
		case 20:
			hrs = 8;
			break;
		case 21:
			hrs = 9;
			break;
		case 22:
			hrs = 10;
			break;
		case 23:
			hrs = 11;
			break;
		case 24:
			hrs = 12;
			break;
	}
	
	
	printf("Equivalent 12-hour time: %d:%02d", hrs, mins);
		
	if ((hrs > 1 && hrs < 12) && mins >= 0) {
		printf("AM\n");
	} else { printf("PM\n"); }

	return 0;

}
