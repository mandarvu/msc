#include <stdio.h>
#include <math.h>

int main() {
	float x1, y1, x2, y2,dist;
	printf("Give two co ordinates of point 1: ");
	scanf("%f %f", &x1, &y1);

	printf("Give two co ordinates of point 2: ");
	scanf("%f %f", &x2, &y2);

	dist = sqrt(pow(x1-x2, 2) + pow(y1-y2,2));

	printf("The distance is: %4.2f\n", dist);
	return 0;
}
