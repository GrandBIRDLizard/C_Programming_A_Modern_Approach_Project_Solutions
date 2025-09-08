#include <stdio.h>

#define N 100

int main(void)
{
	char sentance[N];
	char endPunctuation, in;
	int i = 0;

	printf("Enter a sentance: ");

	int count = 0;
	while ((in = getchar()) != '\n') {
		if (in == '?' || in == '.' || in == '!') {
			endPunctuation = in;
			break;
		}
		sentance[count] = in;
		count++;
		continue;
	}
	sentance[count] = '\0';

	for (i = count - 1; i >= 0; i--) {
        if (sentance[i] == ' ') {
           sentance[i] = '\0';
		   printf("%s ", &(sentance[i]) + 1);
        }
	}
    printf("%s%c\n", sentance, endPunctuation);

	return 0;
}
