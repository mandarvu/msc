#include <stdio.h>
#include <stdlib.h>

int factorial (int n) {
  int prod = 1;
  for (int i = 1; i <= n; i++)
    prod *= i;
  return prod;
}

int combination(int n, int r) {
  if (r > n)
  {
    printf("error, r > n\n");
    exit(1);
  }
  else
    return (factorial(n) / (factorial(r) * factorial(n-r)));
}


int main() {
  int n, r;
  printf("Enter n and r in nCr\n");
  scanf("%d %d",&n, &r);
  printf("%dC%d = %d\n",n,r,combination(n,r));
  return 0;
}
