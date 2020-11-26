#include <stdio.h>

long int fibo(int);

int main() {
  int n,ii;
  printf("How many terms Fibonacci sequence?\n>>> ");
  scanf("%d",&n);
  for (ii = 1; ii <= n; ii++)
    printf("%lld\t",fibo(ii));
}

long long int fibo(int nn) {
  int a1 = 1, a2 = 1, an;
  if (nn == 1)
    return (1);
  if (nn == 2)
    return (1);
  else
  {
    an = fibo(nn - 1) + fibo(nn - 2);
  }
  return (an);
}

