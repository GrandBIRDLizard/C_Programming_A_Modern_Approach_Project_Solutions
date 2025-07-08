#include <stdio.h>

int main(void)
{
	int ngrade;
	char grade;

	printf("Enter numerical grade: ");
	scanf("%d", &ngrade);

	if (ngrade > 100) {
		
		grade = 'S';
	} else if (ngrade <= 100 && ngrade >= 90) {
		grade = 'A';
	} else if (ngrade < 90 && ngrade >= 80) {
		grade = 'B';
	} else if (ngrade < 80 && ngrade >= 70) {
		grade = 'C';
	} else if (ngrade < 70 && ngrade >= 60) {
		grade = 'D';
	} else if (ngrade < 60) {
		grade = 'F';
	} 

	switch(grade) {
		case 'S':
			printf("Grade too large enter valid grade [1-100]\n");
			break;
		case 'A':
			printf("Letter grade: A\n");
			break;
		case 'B':
			printf("Letter grade: B\n");
			break;
		case 'C':
			printf("Letter grade: C\n");
			break;
		case 'D':
			printf("Letter grade: D\n");
			break;
		case 'F':
			printf("Letter grade: F\n");
			break;
		default:
			printf("Please enter a valid numerical grade [1-100]\n");
			break;
	}
	return 0;
}
