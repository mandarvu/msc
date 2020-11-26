#include <stdio.h>

int main() {
	printf("Enter a natural number.\n");
	int num, sum=0, i=1, temp;
	scanf("%d", &num);
	temp = num;
	while (num > 0)
	{
		num /= 10;
		sum += i;
	}
	printf("%d is the number of digits in %d\n",sum, temp);
	return 0;
}


