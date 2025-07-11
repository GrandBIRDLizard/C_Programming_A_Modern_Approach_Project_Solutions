#include <stdio.h>

int main(void)
{
	int tens, ones, teens;
	
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &tens, &ones);
	
	if (tens == 1 && ones <= 9) {
		teens = (tens + ones);
		
		switch(teens) {
			case 10:
				printf("Ten");
				break;
			case 11:
				printf("Eleven");
				break;
			case 12:
				printf("Twelve");
				break;
			case 13:
				printf("Thirteen");
				break;
			case 14:
				printf("Fourteen");
				break;
			case 15:
				printf("Fifteen");
				break;
			case 16:
				printf("Sixteen");
				break;
			case 17:
				printf("Seventeen");
				break;
			case 18: 
				printf("Eighteen");
				break;
			case 19:
				printf("Nineteen");
				break;
		}
	} else if (tens > 1) {
		switch(tens) {
			case 2:
				printf("Twenty-");
				break;
			case 3:
				printf("Thirty-");
				break;
			case 4:
				printf("Fourty-");
				break;
			case 5:
				printf("Fifty-");
				break;
			case 6:
				printf("Sixty-");
				break;
			case 7: 
				printf("Seventy-");
				break;
			case 8:
				printf("Eighty-");
				break;
			case 9:
				printf("Ninety-");
				break;
			default: 
				printf("Please enter a valid two-digit number");
		}

		switch(ones) {
			case 1:
				printf("One\n");
				break;
			case 2:
				printf("Two\n");
				break;
			case 3:
				printf("Three\n");
			case 4:
				printf("Four\n");
				break;
			case 5:
				printf("Five\n");
				break;
			case 6:
				printf("Six\n");
				break;
			case 7:
				printf("Seven\n");
				break;
			case 8:
				printf("Eight\n");
				break;
			case 9:
				printf("Nine\n");
		}

		
	}

return 0;
		
}
