#include <stdio.h>

int main() {
	int num1, num2, num3;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("The largest of two is: %d\n", num1 >= num2 ? num1 : num2);
	printf("Enter another number: ");
	
	scanf("%d",&num3); // 3 5 1
	printf("Three numbers are\na = %d\nb = %d\nc = %d\n", num1, num2, num3);

	printf("The largest of three is: %d\n", num1 >= num2 ? (num1 >= num3 ? num1 : num3) : (num2 >= num3 ? num2: num3));
	return 0;
}
