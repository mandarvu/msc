#include <stdio.h>
#include <stdlib.h>

long long int factorial (int n) {
  int prod = 1;
  for (int i = 1; i <= n; i++)
    prod *= i;
  return prod;
}

long double series_2(int n) {
  float summ = 0;
  for (int i = 1; i <= n; i++)
    summ += (float) (1.0 / factorial(i));
  return summ;
}

int main() {
  int num;
  printf("Enter a positive integer.\n");
  scanf("%d",&num);
  printf("Sum of the series from 1 to %d is %.15Lf\n",num, series_2(num));
  return 0;
}
