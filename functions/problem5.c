#include <stdio.h>
#include <stdlib.h>

int parity(int n) {
  if (n % 2 == 0)
    return 1;
  else
    return 0;
}

int main() {
  int num;
  printf("Enter a integer.\n");
  scanf("%d",&num);
  printf("Number is %s\n", parity(num) ? "EVEN" : "ODD" );
  return 0;
}
