#include <stdio.h>
#define SIZE 5

int main(int argc, char const *argv[]) {
  int numbers[SIZE], large, small;
  printf("Enter %d numbers: ", SIZE);
  for (int i = 0; i < SIZE; i++)
    scanf("%d",numbers + i);
  large = small = *(numbers + 0);

  for (int j = 0; j < SIZE - 1; j++) {
      if (*(numbers + j) > *(numbers + j + 1))
        small = *(numbers + j + 1);
      else
        large = *(numbers + j + 1);
  }

  printf("Largest %d and smallest %d\n",large, small);
}
