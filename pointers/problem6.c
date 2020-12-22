#include <stdio.h>
#define MAX 5

int add_all_elems(int *source) {
  int summ = 0, cnt = 0;
  while (cnt < MAX) {
    summ += *source;
    source++;
    cnt++;
  }
  return summ;
}

int main() {
  int numbers[MAX];

  printf("Enter %d numbers: ", MAX);
  for (int i = 0; i < MAX; i++)
    scanf("%d",numbers + i);

  printf("\nArray 1:\n");
  for (int i = 0; i < MAX; i++)
    printf("%d\t",  *(numbers + i));

  printf("\nThe sum of elements in array is %d\n", add_all_elems(numbers));
}
