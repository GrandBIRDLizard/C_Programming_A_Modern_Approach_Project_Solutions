#include <stdio.h>


int main(void)
{	
	int val = 0;
	float let = 0.0;
	float word = 1.0;
	int ch;
	float avg;

	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n' && ch != EOF) {
		if (ch == ' ') {
			val += 1;
			word += 1;
		} else {
			let += 1;
		}
	}
	printf("spaces: %d\n", val);
	printf("words: %d\n",(int) word);
	printf("letters: %d\n", (int)let);

	avg = (let / word);

	printf("Average word lengeth: %0.1f\n", avg);

	return 0;
}
