#include <stdio.h>

int main(void)
{
	int nums[4];
	int largest, smallest;
	
	printf("Enter four integers: ");

	for (int i = 0; i < 4; i++) {
		scanf("%d", &nums[i]);
	}

	largest = smallest = nums[0];

	for (int i = 1; i < 4; i++) {
		if (nums[i] > largest)
			largest = nums[i];
		if (nums[i] < smallest)
			smallest = nums[i];
	}

	printf("Largest: %d\nSmallest: %d\n", largest, smallest);
	
	return 0;
}
