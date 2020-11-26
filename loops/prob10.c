#include <stdio.h>

int main() {
	printf("Enter a natural number.\n");
	int num, i=1, sum = 0;
	scanf("%d", &num);
	for (; num > 0; num /= 10)
	{
		sum += (num % 10);
	}
	printf("Sum of digits is %d\n",sum);
}

