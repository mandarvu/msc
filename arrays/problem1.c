#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numbers[10], sum = 0;
  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++)
    scanf("%d",numbers + i);
  for (int i = 0; i < 10; i++)
    sum += *(numbers + i);

  printf("The sum is %d\n", sum);
  return 0;
}
