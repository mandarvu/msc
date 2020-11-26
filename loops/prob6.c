#include <stdio.h>

int main() {
	printf("Enter a natural number.\n");
	int num, i=1;
	long prod=1;
	scanf("%d", &num);
	while (i <= num)
	{
		prod *= i;
		i++;
	}
	printf("%ld is the factorial of %d\n",prod, num);
	return 0;
}
