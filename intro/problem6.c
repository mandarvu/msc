#include <stdio.h>

int main () {
	float var1, var2;
	int ivar1, ivar2;
	printf("Give two numbers\n");
	scanf("%f %f", &var1, &var2);
	ivar1 =(int) var1;
	ivar2 =(int) var2;
	printf("%d %d\n", ivar1, ivar2);
	printf("Addition: %5.2f + %5.2f = %5.2f\n", var1, var2, var1 + var2);
	printf("Multiplication: %5.2f * %5.2f = %5.2f\n", var1, var2, var1 * var2);
	printf("Subtraction: %5.2f - %5.2f = %5.2f\n", var1, var2, var1 - var2);
	printf("Integer division: %d / %d = %d\n", ivar1, ivar2,ivar1 / ivar2);
	printf("Modular division: %d mod %d = %d\n", ivar1, ivar2,ivar1 % ivar2);
	printf("Normal Division: %5.2f / %5.2f = %5.2f\n", var1, var2, (var1*1.0) / var2);
	return 0;
}
