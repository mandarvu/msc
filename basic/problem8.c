#include <stdio.h>

int main() {
	int num1, num2, temp;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("Before Swapping\n");
	printf("num1\t= %d\nnum2\t= %d\n",num1, num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("After swapping (using temp variable.)\n");
	printf("num1\t= %d\nnum2\t= %d\n",num1, num2);
	
	printf("Now swapping again (without using temp)\n");

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("After swapping (without using temp variable.)\n");
	printf("num1\t= %d\nnum2\t= %d\n",num1, num2);
	return 0;
}

