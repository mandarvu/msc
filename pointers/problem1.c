#include <stdio.h>

void add(int *a, int *b, int *c) {
  *c = *a + *b;
}

int main() {
  int num1, num2, *summ;
  printf("Enter 2 nums\n");
  scanf("%d %d",&num1, &num2 );
  add(&num1, &num2, summ);
  printf("%d + %d = %d\n",num1, num2, *summ);
  return 0;
}
