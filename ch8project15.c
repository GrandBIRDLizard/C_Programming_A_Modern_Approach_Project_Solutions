#include <stdio.h>

#define N 80

int main(void)
{
	char letter;
	int message[N];
	int shiftNum;
	
	printf("Enter message to be enctypted: ");
	int count = 0;
	while ((letter = getchar()) != '\n') {
			message[count] = letter;
			count++;
			continue;
	}
	message[count] = '\0';

	printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftNum);

    printf("Encrypted message: ");
    for (int i = 0; i < count; i++) {

        if (message[i] >= 'A' && message[i] <= 'Z') {
            printf("%c", ((message[i] - 'A') + shiftNum) % 26 + 'A');
        }
        else if (message[i] >= 'a' && message[i] <= 'z') {
            printf("%c", ((message[i] - 'a') + shiftNum) % 26 + 'a');
        }
        else {
            printf("%c", message[i]);
        }
    }

	return 0;
}
