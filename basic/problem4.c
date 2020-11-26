#include <stdio.h>
#define PI 3.141
#include <math.h>
#include <stdlib.h>
int main() {
	float a, b, c, s, Area;
	printf("Enter three sides of a triangle: ");
	scanf(" %f %f %f", &a, &b, &c);
	s = (a + b + c) / 2.0;
	Area = sqrt(abs(s * (s-a) * (s-b) * (s-c)));

	printf("Area of triangle is: %4.2f\n", Area);
	return 0;
}
