#include <stdio.h>
#include <ctype.h>

#define N 50

int main(void)
{
	char message[N];
	int ch = 0, i = 0;

	printf("Enter message: ");

	while ((ch = toupper(getchar())) != '\n' && i < N - 1) {
		message[i] = ch;
		switch(message[i]) {
			case 'A': message[i] = '4'; break;
			case 'B': message[i] = '8'; break;
			case 'E': message[i] = '3'; break;
			case 'I': message[i] = '1'; break;
			case 'O': message[i] = '0'; break;
			case 'S': message[i] = '5'; break;
		}
		i++;
	}
	message[i] = '\0';

	printf("In Bif Speak: %s!!!!!!!!!!\n", message);

	return 0;

}
