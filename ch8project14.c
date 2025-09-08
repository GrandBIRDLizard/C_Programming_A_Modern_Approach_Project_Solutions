#include <stdio.h>

#define N 100

int main(void)
{
	char sentence[N];
	char endPunctuation, in;
	int i = 0;

	printf("Enter a sentence: ");

	int count = 0;
	while ((in = getchar()) != '\n') {
		if (in == '?' || in == '.' || in == '!') {
			endPunctuation = in;
			break;
		}
		sentence[count] = in;
		count++;
		continue;
	}
	sentence[count] = '\0';

	for (i = count - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
           sentence[i] = '\0';
		         printf("%s ", &(sentence[i]) + 1);
        }
	}
    printf("%s%c\n", sentence, endPunctuation);

	return 0;
}
