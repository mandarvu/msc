#include <stdio.h>
int gcd(int,int);

int main()
{
	int a,b;
	printf("Give two integers.\n>>> ");
	scanf("%d %d",&a,&b);
	printf("gcd(%d , %d) = %d\n",a,b,gcd(a,b));
}

int gcd(int a, int b)
{
	if (b != 0)
		return(gcd(b,a%b));
	else
    return(a);
}
