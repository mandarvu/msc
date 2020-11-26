#include <stdio.h>
int main(), gcd(int,int);

int main()
{
  int a, b,div;
  printf("Give numbers: ");
  scanf("%d %d",&a,&b);
  div = gcd(a,b);
  printf("GCD = %d\nLCM = %d",div, (a * b)/div);
}

int gcd(int a, int b)
{
	int i,r=1,tmp;
	r = a;i = b;
	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}

