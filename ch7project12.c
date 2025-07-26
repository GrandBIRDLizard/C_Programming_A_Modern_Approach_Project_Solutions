#include <stdio.h>
#include <ctype.h>

int main(void)
{
	double result = 0.0f; 
	double number = 0.0f;
	char in;

	printf("Enter an expression: ");
	scanf("%lf", &result);

	while ((in = getchar()) != '\n') {
		switch (in) {
			case '+':
				scanf("%lf", &number);
				result += number; 
				break;
			case '-':
				scanf("%lf", &number);
				result -= number; 
				break;
			case '*':
				scanf("%lf", &number);
				result *= number; 
				break;
			case '/':
				scanf("%lf", &number);
				if (number == 0) {
					printf("Can not divide by zero");
					return 1;
				}
				result /= number;
				break;
			default:
				if (isspace(in)) {
					continue;
				}
				printf("Please enter a valid expression");
				break;
		}
	}
	printf("Result: %.1lf\n", result);
}

