#include <stdio.h>

int main(void)
{
	int i, SIZE = 10;
	int arr[SIZE];

	printf("Enter %d numbers: ", SIZE);
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
	}
	printf("In reverse order:");
	for (i = SIZE - 1; i >= 0; i--) {
		printf(" %d", arr[i]);
	}
	printf("\n");

	return 0;
}
