#include <stdio.h> 

int main()
{
	int n, i;

	printf("Enter number to find all even squares within: ");
	scanf("%d", &n);
	
	for (i = 2; i * i <= n; i += 2) {
		printf("%d\n", i * i);
	}

	return 0;
}
