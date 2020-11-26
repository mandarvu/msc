#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

long long int factorial(int);

int main() {
  int n;
  printf("Enter a positive integer.\n" );
  scanf("%d", &n );
  printf("%d factorial is %lld\n",n, factorial(n) );
}

long long int factorial(int num) {
  if (num == 1)
    return 1;
  else
    return (num * factorial(num - 1));
}
