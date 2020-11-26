#include <stdio.h>
#include <math.h>
int Primes(int n)
{
	int i;
	if(n == 2)
		return 1;
	else if(n%2 == 0)
		return 0;
	else
	{
		for(i=3;i<=sqrt(n);i=i+2)
		{
			if(n % i==0)
				return 0;
		}
		return 1;
	}
}

int main() {
	int num;
	printf("Enter a positive number\n");
	scanf("%d", &num);
	printf("%d is %s\n", num, Primes(num) == 1 ? "prime" : "composite");
}
