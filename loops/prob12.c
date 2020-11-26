#include <stdio.h>

int main(), bin(int);
#define MAX 10
int main()
{
  int n;
  printf("Give a number.\n>>> ");
  scanf("%d",&n);
  bin(n);
  // printf("The binary equvalent of %d is %d\n",n,bin(n));
}

int bin(int n)
{
  int ii = 1,kk,ll;
  int jj[MAX];
  for (ll = 0; ll < MAX;ll++)
  {
    ii = n % 2;
    jj[ll] = ii;
    n /= 2;
  }
  for (kk = MAX - 1; kk >= 0; kk--)
    printf("%d ",jj[kk]);
  printf("\n");
}

