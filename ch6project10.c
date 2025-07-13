#include <stdio.h>
#define PIVOT_YEAR 50

int convert_year(int y) {
	return (y < PIVOT_YEAR) ? (2000 + y) : (1900 + y);
}

int is_earlier(int m1, int d1, int y1, int m2, int d2, int y2) {
	if (y1 != y2) return y1 < y2;
	if (m1 != m2) return m1 < m2;
	return d1 < d2;
}


int main(void) 
{
	int m1, d1, y1;
	int earliest_m = 0, earliest_d = 0, earliest_y = 0;
	int first = 1;
	int asking = 1;

	while (asking) {
		printf("Enter date: ");
		scanf("%2d/%2d/%2d", &m1, &d1, &y1);
		if (m1 == 0 && d1 == 0 && y1 == 0) {
			asking = 0;
		}
	y1 = convert_year(y1);

	if (first) {
		earliest_m = m1;
		earliest_d = d1;
		earliest_y = y1;
		first = 0;
	} else if (is_earlier(m1, d1, y1, earliest_m, earliest_d, earliest_y)) {
		earliest_m = m1;
		earliest_d = d1;
		earliest_y = y1;
	}

	}
	

	if (!first) {
		printf("Earliest date: %02d/%02d/%02d\n", earliest_m, earliest_d, earliest_y);
	} else {
		printf("Please enter a valid date.\n");
	}

	return 0;
}
