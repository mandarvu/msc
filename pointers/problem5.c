#include <stdio.h>
#define MAX 5

void main() {
  int numbers[MAX], val, pos;

  printf("Enter %d numbers: ", MAX);
  for (int i = 0; i < MAX; i++)
    scanf("%d",numbers + i);

  printf("\nArray:\n");
  for (int i = 0; i < MAX; i++)
    printf("%d\t",  *(numbers + i));
  printf("\n");
}
