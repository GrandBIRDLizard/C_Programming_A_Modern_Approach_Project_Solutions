#include <stdio.h>

int main(void)
{
	float rcommission, bcommission, value, shares, pps;
	
	printf("Enter number of shares: ");
	scanf("%f", &shares);
	printf("Enter price per share: ");
	scanf("%f", &pps);

	value = (shares * pps);


	if (value < 2500.00f)
		bcommission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		bcommission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		bcommission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		bcommission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		bcommission = 155.00f + .0011f * value;
	else 
		bcommission = 255.00f + .0009f * value;
	
	if (bcommission < 39.00f)
		bcommission = 39.00f;

		printf("broker's commission: $%.2f\n", bcommission);
		
	if (shares < 2000) 
        rcommission = 33.00f + (shares * 0.03f);
    else
        rcommission = 33.00f + (shares * 0.02f);

		printf("Rival's commisssion: $%.2f\n", rcommission);

		return 0;

}
