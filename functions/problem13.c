#include <stdio.h>

float traing_area(float base, float height) {
	return (0.5 * base * height);
}

int main() {
	float base, height;
	printf("Enter base and height\n");
	scanf("%f %f" ,&base, &height);
	printf("Area of triangle is %.4f\n", traing_area(base,height));
	return 0;
}

