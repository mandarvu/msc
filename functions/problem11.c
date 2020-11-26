#include <stdio.h>

int digit_reverse(int n) {
  static int rev_num = 0, base = 1;
  if (n > 0)
  {
    digit_reverse(n / 10);
    rev_num += (n % 10) * base;
    base *= 10;
  }
  return rev_num;
}

int main() {
  int n;
  printf("Enter a positive integer.\n" );
  scanf("%d", &n );
  printf("Reverse of digits of %d = %d\n",n, digit_reverse(n));
  return 0;
}
