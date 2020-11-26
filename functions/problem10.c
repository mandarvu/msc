#include <stdio.h>

int digit_sum(int n) {
  if (n == 1)
    return 1;
  else
    return ((n % 10) + digit_sum(n / 10));
}

int main() {
  int n;
  printf("Enter a positive integer.\n" );
  scanf("%d", &n );
  printf("Sum of digits of %d = %d\n",n, digit_sum(n));
  return 0;
}
