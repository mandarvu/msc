#include <stdio.h>
void trichotomy(int *a) {
  if (*a > 0)
    printf("%d is greater than 0\n", *a );
  else if (*a < 0)
    printf("%d is less than 0\n", *a );
  else
    printf("Given number is 0\n");
}
int main() {
  int num1;
  printf("Enter number: ");
  scanf("%d",&num1);
  trichotomy(&num1);
  return 0;
}
