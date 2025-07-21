#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char op;

	printf("Enter Two fractions\nbetween an operation\n(+,-,/,*)\nin this format 1/2+1/5: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

	switch (op) {
		case '+':
			result_num = (num1 * denom2) + (num2 * denom1);
			result_denom = (denom1 * denom2);
			printf("The sum is: %d/%d\n", result_num, result_denom);
			break;
		case '-':
			result_num = (num1 * denom2) - (num2 * denom1);
			result_denom = (denom1 * denom2);
			printf("The difference is: %d/%d\n", result_num, result_denom);
			break;
		case '*':
			result_num = (num1 * denom2) * (num2 * denom1);
			result_denom = (denom1 * denom2);
			printf("The product is: %d/%d\n", result_num, result_denom);
			break;
		case '/':
			result_num = (num1 * denom2) / (num2 * denom1);
			result_denom = (denom1 * denom2);
			if (result_num != 0 && result_denom != 0) {
				printf("The divisor is: %d/%d\n", result_num, result_denom);
				break;
			} else {
				printf("Can not divide by zero!");
				break;
			}
		default:
			printf("Please Enter Two valid fractions");
	}

	return 0;
}
