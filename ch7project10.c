#include <stdio.h> 
#include <ctype.h>

int main(void)
{
	char op;	
	int times = 0;
	
	printf("Write a sentence: ");

	while ((op = getchar()) != '\n') {
		op = toupper(op);
		switch (op) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				times++;
				break;
		} 
	}
	printf("Your sentence contained %d vowels.", times);

	return 0;
}
