#include <stdio.h>

#define N 5

int main(void)
{
	int i, j, k, l;
	int sumR[N] = {0};
	int sumC[N] = {0};
	int matrix[N][N] = {0};

	for (i = 0; i < N; i++) {
		printf("Enter Row: ");
		for (j = 0; j < N; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			sumR[i] += matrix[i][j];
			sumC[j] += matrix[i][j];
		}
	}

	printf("Row Totals: ");
	for (i = 0; i < N; i++) {
			printf("%d ", sumR[i]);
		}
	printf("\n");
	
	printf("Column Totals: ");
	for (j = 0; j < N; j++) {
		printf("%d ", sumC[j]);
	}
	printf("\n");


	return 0;
}

