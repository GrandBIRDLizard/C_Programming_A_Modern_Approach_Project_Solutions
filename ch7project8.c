#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hrs, mins, minsPast, ampm;
	char op;

    printf("Please enter a 12-hour time(hh:mmP/A): ");
    scanf("%2d:%2d%c", &hrs, &mins, &op);
	
	ampm = (toupper(op) == 'P' ? 12 : 0);

	hrs = (hrs == 12 ? 0 : hrs);
	
	printf("Equivalent 24-hour time: %.2d:%.2d\n", hrs + ampm, mins);
    minsPast = ((ampm + hrs) * 60) + mins;

    if (minsPast <= ((8 * 60) + (103 / 2)))
        printf("Closest departure time is 8:00 AM., arriving at 10:16 AM\n");
    else if (minsPast < ((9 * 60) + 43) + (96 / 2))
        printf("Closest departure time is 9:43 AM., arriving at 11:52 AM\n");
    else if (minsPast < ((11 * 60) + 19) + (88 / 2))
        printf("Closest departure time is 11:19 AM., arriving at 1:31 PM\n");
    else if (minsPast <= ((12 * 60) + 47) + (73 / 2))
        printf("Closest departure time is 12:47 PM., arriving at 3:00 PM\n");
    else if (minsPast <= ((14 * 60) + (105 / 2)))
        printf("Closest departure time is 2:00 PM., arriving at 4:08 PM\n");
    else if (minsPast <= ((15 * 60) + 45) + (195 / 2))
        printf("Closest departure time is 3:45 PM., arriving at 5:55 PM\n");
    else if (minsPast <= ((19 * 60) + (165 / 2)))
        printf("Closest departure time is 7:00 PM., arriving at 9:20 PM\n");
    else 
        printf("Closest departure time is 9:45 PM., arriving at 11:58 PM\n");

    return 0;
}
