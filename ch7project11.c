#include <stdio.h>
#include <ctype.h>


int main(void)
{
	int i = 0;
	char Lname[20];
	char firstI, in;
	printf("Enter your first and last name:");

	while (isspace(in = getchar()));
		;

	firstI = in;

	while ((in = getchar()) != ' ' && in != '\n')
		;

	while ((in = getchar()) != '\n') {
		if (isspace(in)) {
			continue;
		} 
		Lname[i++] = in;
	}
	
	Lname[i] == '\0';

	printf("%s, %c", Lname, firstI);

	return 0;
}


