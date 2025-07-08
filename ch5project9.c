#include <stdio.h>
#define PIVOT_YEAR 50

int convert_year(int y) {
	return (y < PIVOT_YEAR) ? (2000 + y) : (1900 + y);
}

int main(void) 
{
	int m1, m2, d1, d2, y1, y2;

	printf("Enter first date: ");
	scanf("%2d/%2d/%2d", &m1, &d1, &y1);
	printf("Enter second date: ");
	scanf("%2d/%2d/%2d", &m2, &d2, &y2);

	y1 = convert_year(y1);
	y2 = convert_year(y2);

	
	if (y1 < y2){
		printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m1, d1, y1 % 100, m2, d2, y2 % 100);
	} else if (y2 < y1) {
		printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m2, d2, y2 % 100, m1, d1, y1 % 100);
	} else if (m1 < m2) {
		printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m1, d1, y1 % 100, m2, d2, y2 % 100);
	} else if (m2 < m1) {
		printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m2, d2, y2 % 100, m1, d1, y1 % 100);
	 } else if (d1 < d2) {
		printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m1, d1, y1 % 100, m2, d2, y2 % 100);
	} else {
		printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m2, d2, y2 % 100, m1, d1, y1 % 100);
	}
	
	return 0;
}
