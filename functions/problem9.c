#include <stdio.h>

int sum_finder(int n) {
  if (n == 1)
    return 1;
  else
    return (n + sum_finder(n-1));
}

int main() {
  printf("The sum of first 20 natural numbers is %d\n", sum_finder(20));
  return 0;
}
