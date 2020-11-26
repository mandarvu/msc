#include <stdio.h>
#include <math.h>

int main() {
	int num, sum = 0, target = 0, tmp;
	printf("Enter a number: ");
	scanf("%d", &num);
	tmp = num;
	while (num > 0)
	{
		sum += pow(num%10, 3);
		num /= 10;
	}
	printf("%d is %s number\n", tmp, tmp==sum ? "Armstrong" : "not an Armstrong");
	return 0;
}
