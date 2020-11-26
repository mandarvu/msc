#include <stdio.h>

int smallest(int num1, int num2, int num3) {
	return (num1 <= num2 ? (num1 <= num3 ? num1 : num2) : (num2 <= num3 ? num2 : num3 ));
}

int main() {
	int x, y, z;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&x, &y, &z);
	printf("Smallest of %d %d and %d is %d\n", x,y,z, smallest(x,y,z));
	return 0;
}
