#include <stdio.h>

void main() {
  char uni[] = "UNIVERSITY";
  char *base = uni;

  for (int i = 1; i <= 5; i++) {
    for (int j = 0; j < 2*i; j++){
      printf("%c ", *(base + j));
    }
    printf("\n");
  }

  for (int i = 4; i >= 1; i--) {
    for (int j = 0; j < 2*i; j++){
      printf("%c ", *(base + j));
    }
    printf("\n");
  }
}
