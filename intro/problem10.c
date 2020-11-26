#include <stdio.h>

int main () {
	int num;
	printf("Give an input radius: ");
	scanf(" %d",&num);
	printf("The area of given circle of radius %d units is %d square units\n", num, num * num);
	return 0;
}
