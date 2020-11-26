#include <stdio.h>

int main() {
	printf("Enter a natural number.\n");
	int num, sum = 0, i = 1;
	scanf("%d", &num);
	while (i <= num) {
		sum += i;
		i++;
	}
	printf("%d is the sum of first %d natural numbers.\n",sum, num);
	return 0;
}
