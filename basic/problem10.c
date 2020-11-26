#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[20];
	int marks[5], total = 0;
	float perc;

	printf("NAME: ");
	scanf(" %s", name);

	printf("MARKS(out of 100): ");
	for (int i=0; i < 5; i++)
	{
		scanf("%d", marks+i);
	}
	
	for (int i=0; i<5; i++)
		total += *marks+i;

	perc = (total/5);
	printf("NAME: %s\n", name);
	printf("TOTAL: %d\n", total);
	printf("PERCENTAGE: %4.2f\n", perc);

	return 0;
}
