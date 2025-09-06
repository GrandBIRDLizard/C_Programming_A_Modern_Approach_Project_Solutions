#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM_TRAINS 8  

int MinsPast(int hrs, int mins) {
    int minspast = (hrs * 60) + mins;
    return minspast;
}

int main(void)
{
    char period[3];
    int i, hour, minute, currentTime, closestD, closestA;
    int arivialTime[NUM_TRAINS] = {0};	
	int Ahrs[] = {10, 11, 13, 15, 16, 17, 21, 23};	
    int Amins[] = {16, 52, 31, 0, 8, 55, 20, 58};
    int departureTime[NUM_TRAINS] = {0};
	int Dhrs[] = {8, 9, 11, 12, 14, 15, 19, 21};
    int Dmins[] = {0, 43, 10, 47, 0, 45, 0, 45};

    for (i = 0; i < NUM_TRAINS; i++) {
        departureTime[i] = MinsPast(Dhrs[i], Dmins[i]);
    }
    for (i = 0; i < NUM_TRAINS; i++) {
        arivialTime[i] = MinsPast(Ahrs[i], Amins[i]);
    }

    printf("Please enter a time(hh:mmAM/PM): ");
    scanf("%2d:%2d%2s", &hour, &minute, period);
    period[2] = '\0';  

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
		printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s.\n",
       ((closestD / 60) % 12 == 0 ? 12 : (closestD / 60) % 12), closestD % 60, (closestD / 60) >= 12 ? "PM" : "AM",
       ((closestA / 60) % 12 == 0 ? 12 : (closestA / 60) % 12), closestA % 60, (closestA / 60) >= 12 ? "PM" : "AM");
    }

    return 0;
}
