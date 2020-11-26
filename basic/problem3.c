#include <stdio.h>
#define PI 3.141

int main() {
	float P = 4000, T = 2, R = 5.5, I;

	I = (P * T * R)/100;

	printf("The simple interest is: %4.3f", I);
	return 0;
}
