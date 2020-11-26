#include <stdio.h>

int main () {
	int var1, var2;
	printf("Give two numbers\n");
	scanf("%d %d", &var1, &var2);
	printf("Addition: %d + %d = %d\n", var1, var2, var1 + var2);
	printf("Multiplication: %d * %d = %d\n", var1, var2, var1 * var2);
	printf("Subtraction: %d - %d = %d\n", var1, var2, var1 - var2);
	printf("Integer division: %d / %d = %d\n", var1, var2, var1 / var2);
	printf("Modular division: %d mod %d = %d\n", var1, var2, var1 % var2);
	printf("Normal Division: %d + %d = %5.2f\n", var1, var2, (var1*1.0) / var2);
	return 0;
}
