#include <stdio.h>
#include <string.h>

#define NUM_TRAINS 7

int MinsPast(int hrs, int mins) {
	int minspast = (hrs * 60) + mins;

	return minspast;
}

int main(void)
{
	char period[3];
	int i, hour, minute, currentTime, closestD, closestA;
	int arivialTime[NUM_TRAINS] = {0};
	int Ahrs[] = {10, 11, 1, 3, 4, 5, 9, 11}; 
	int Amins[] = {16, 52, 31, 0, 8, 55, 20, 58};
	int departureTime[NUM_TRAINS] = {0};
	int Dhrs[] = {8, 9, 11, 12, 2, 3, 7, 9}; 
	int Dmins[] = {0, 43, 10, 47, 0, 45, 0, 45};

	for (i = 0; i < NUM_TRAINS; i++) {
		departureTime[i] = MinsPast(Dhrs[i], Dmins[i]);
	}
	for (i = 0; i < NUM_TRAINS; i++) {
		arivialTime[i] = MinsPast(Ahrs[i], Amins[i]);
	}

    printf("Please enter a time(hh:mm): ");
    scanf("%2d:%2d%2s", &hour, &minute, period);

	if (strcmp(period, "PM") == 0 && hour != 12) {
		hour += 12;
	} else if (strcmp(period, "AM") == 0 && hour == 12) {
		hour = 0;
	}
	
	currentTime = MinsPast(hour, minute);

	closestD = -1;
	closestA = -1;

	for (i = 0; i < NUM_TRAINS; i++) {
		if (currentTime <= departureTime[i]) {
			closestD = departureTime[i];
			closestA = arivialTime[i];
			break;
		}
	}
	if (closestD == -1) {
		printf("No more trains today.\n");
	} else {
		printf("Closest departure time is %02d:%02d, arriving at %02d:%02d.\n", (closestD/60), (closestD%60), (closestA/60), (closestA%60));
	}

	return 0;
}
