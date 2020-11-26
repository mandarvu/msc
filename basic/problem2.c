#include <stdio.h>
#define PI 3.141

int main() {
	float radius,height;
	//printf("Give radius of base and height: ");
	//scanf(" %f %f", &radius, &height);
	radius = 5;
	height = 10;
	printf("The volume of the given cone is: %4.3f\n", PI * (radius * radius) * height * (1.0/3));
	return 0;
}
