#include <stdio.h>


int main(void)
{
	int N;

	printf("Enter an odd number between 1-99: ");
	scanf("%d", &N);

	int i = 0, j = N/2;
	int mSquare[N][N];

	int nSquared = N * N;
	
	for (int k = 1; k <= nSquared; ++k) {
		
		mSquare[i][j] = k;
		i--;
		j++;

		if (k % N == 0) {
			i += 2;
			--j;
		} 
		else {
			if (j==N) {
				j -= N;
			} 
			else if (i < 0) {
				i += N;
			}
		}
	}
	
	for (int l = 0; l < N; l++) {
		for (int m = 0; m < N; m++) {
			printf("%5d", mSquare[l][m]);
		}
		printf("\n");	
	}

	return 0;
}
