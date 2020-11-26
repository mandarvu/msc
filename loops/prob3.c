#include <stdio.h>

int main() {
	printf("Enter a natural number.\n");
	int num, sum=0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		sum += (int) i;
	}
	printf("%d is the sum of first %d natural numbers.\n",sum, num);
	return 0;
}

