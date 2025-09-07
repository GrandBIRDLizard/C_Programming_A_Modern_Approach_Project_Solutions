#include <stdio.h>

#define N 15

int main()
{	
	char op;
	int i, j;
	int phoneNumber[N];
	
	printf("Please enter phone number: ");
	i = 0;
	while ((op = getchar()) != '\n') {
		if (op == '-') {
			continue;
		}

		if ( op >= '0' && op <= '9') {
			phoneNumber[i] = op - '0';
			i++;
			continue;
		}

		if (i == 11) {
			break;
		}

	switch (op) {
		case 'A': case 'a': case 'B': case 'b': case 'C': case 'c':
			phoneNumber[i] = 2;
			i++;
			break;
		case 'D': case 'd': case 'E': case 'e': case 'F': case 'f':
			phoneNumber[i] = 3;
			i++;
			break;
		case 'G': case 'g': case 'H': case 'h': case 'I': case 'i':	
			phoneNumber[i] = 4;
			i++;
			break;
		case 'J': case 'j': case 'K': case 'k': case 'L': case 'l':
			phoneNumber[i] = 5;
			i++;
			break;
		case 'M': case 'm': case 'N': case 'n': case 'O': case 'o':
			phoneNumber[i] = 6;
			i++;
			break;
		case 'P': case 'p': case 'R': case 'r': case 'S': case 's': 
			phoneNumber[i] = 7;
			i++;
			break;
		case 'T': case 't': case 'U': case 'u': case 'V': case 'v':
			phoneNumber[i] = 8;
			i++;
			break;
		case 'W': case 'w': case 'X': case 'x': case 'Y': case 'y':
			phoneNumber[i] = 9;
			i++;
			break;		
	}
	}

	printf("In numeric form: ");
	for (j = 0; j < 11; j++) {
		if (j == 1 || j == 4 || j == 7) {
			printf("-");
		}
		printf("%d", phoneNumber[j]);
	}
	printf("\n");

	
	return 0;
}
