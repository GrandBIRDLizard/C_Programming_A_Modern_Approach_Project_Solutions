#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char Alphabet[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ\0"};
	int Score[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	char word[45];

	char letter;
	int count = 0, sum = 0;
	int i, j;

	printf("Enter a word: ");
	
	while ((letter = getchar()) != '\n') {
		word[count++] = toupper(letter);	
	}

	for (i = 0; i < word[i] - 1; i++) {
		for (j = 0; j < Alphabet[j] - 1; j++)
			if (word[i] == Alphabet[j]) {
				sum += Score[j];
				break;	
			}
	}

	printf("Scrabble value: %d", sum);

	return 0;
}
