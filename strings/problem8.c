#include <stdio.h>
#define LIM 5
#define MAX 20

int main() {
  char names[LIM][MAX];

  printf("Enter %d names\n", LIM );

  for (int j = 0; j < LIM; j++) {
    printf("Name %d: ", j + 1);
    fgets(*(names + j), MAX, stdin);
  }

  printf("\n");

  for (int j = 0; j < LIM; j++)
    printf("Name %d = %s\n", j + 1, *(names +j));

  return 0;
}
