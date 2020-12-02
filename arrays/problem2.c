#include <stdio.h>
#define SIZE 5

int main(int argc, char const *argv[]) {
	int numbers[SIZE], large, small;
	printf("Enter %d numbers: ", SIZE);
	for (int i = 0; i < SIZE; i++)
		scanf("%d",numbers + i);
	large = *(numbers + 0);
	small = *(numbers + 0); 

	for (int j = 0; j < SIZE; j++) {
		if (*(numbers + j) > large)
			large = *(numbers + j);
		else
			continue;
	}

	for (int j = 0; j < SIZE; j++) {
		if (*(numbers + j + 1) < small)
			small = *(numbers + j);
		else
			continue;
	}

	printf("Largest %d and smallest %d\n",large, small);
}
