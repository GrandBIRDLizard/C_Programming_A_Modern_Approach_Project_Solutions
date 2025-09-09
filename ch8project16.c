#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char Alphabet[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ\0"};
	int Score[26] = {0};
	char word1[35];
	char word2[35];
	bool Anagram = true;
	char letter;
	int count1 = 0, count2 = 0;  
	int i, j, k, l, e;

	printf("Enter first word: ");
	while ((letter = getchar()) != '\n') {
		if (isalpha(letter)) {
			word1[count1] = letter;
			count1++;
			continue;
		} else {
			continue;
		}
	} 

	for (i = 0; i < word1[i] - 1; i++) {
		for (j = 0; j < Alphabet[j]; j++) {
			if (toupper(word1[i]) == Alphabet[j]) {
				Score[j]++;
				break;
			}
		}
	}

	
	printf("Enter second word: ");
	while ((letter = getchar()) != '\n') {
		if (isalpha(letter)) {
			word2[count2] = letter;
			count2++;
			continue;
		} else {
			continue;
		}
	}

	for (l = 0; l < word2[l] - 1; l++) {
		for (e = 0; e < Alphabet[j]; e++) {
			if (toupper(word2[l]) == Alphabet[e]) {
				Score[e]--;
				break;
			}
		}
	}

	
	for (k = 0; k < 26; k++) {
		if (Score[k] != 0) {
			Anagram = false;
			break;
		} 
	}

	if (Anagram == true) {
		printf("The words are anagrams.");
	} else {
		printf("The words are not anagrams.");
	}

	return 0;
}
