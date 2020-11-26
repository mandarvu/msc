#include <stdio.h>
#define PI 3.141
int main() {
	float maj_axis, min_axis;
	printf("Give length of major and minor axes: ");
	maj_axis = 6;
	min_axis = 4;	
	//scanf(" %f %f", &maj_axis, &min_axis);

	printf("The area of the given ellipse is: %4.3f\n", PI * min_axis * maj_axis);
	return 0;
}
