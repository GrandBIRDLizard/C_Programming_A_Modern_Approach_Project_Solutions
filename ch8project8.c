#include <stdio.h>

#define N 5
#define GRADE_MAX 100
#define GRADE_MIN 1

int main(void)
{
	int i, j; 
	int low[N] = {0}; 
	int high[N] = {0};
	int sumS[N] = {0};
	int sumQ[N] = {0};
	int AveS[N] = {0};
	int AveQ[N] = {0};
	int matrix[N][N] = {0};

	for (i = 0; i < N; i++) {
		printf("Scores for student %d: ", i+1);
		for (j = 0; j < N; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (j = 0; j < N; j++) {
    low[j] = GRADE_MAX; 
    high[j] = GRADE_MIN;  
}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			sumS[i] += matrix[i][j];
			sumQ[j] += matrix[i][j];
			if (matrix[i][j] < low[j]) {
				low[j] = matrix[i][j];
			}
			if (matrix[i][j] > high[j]) {
				high[j] = matrix[i][j];
			}
		}
	}



	printf("Student Totals: ");
	for (i = 0; i < N; i++) {
			printf("%d ", sumS[i]);
			AveS[i] = sumS[i]/5;
		}
	printf("\n");

	for (i = 0; i < N; i++) {
		printf("Student %d Average: %d ", i+1, AveS[i]);
	}
	printf("\n");



	printf("Column Totals: ");
	for (j = 0; j < N; j++) {
		printf("%d ", sumQ[j]);
	}
	printf("\n");

	printf("%d", high[0]);


	return 0;
}

