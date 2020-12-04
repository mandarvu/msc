#include <stdio.h>
#define MAX 25

void string_reverse(char *origin, char *rev) {
  int f = 0, cnt = 0, j = 0; //These are just counter variables

  while ( *(origin + f) != '\0' ) {
    cnt++;
    f++;
  }

  for (int i = cnt - 1; i >= 0; i--)
  {
    *(rev + j) = *(origin + i);
    j++;
  }

  *(rev + j) = '\0'; // To make sure that the string terminates
}

int main () {
  char source[MAX], final[MAX];
  printf("Enter a string (max %d characters): ", MAX);
  fgets(source, MAX, stdin);
  printf("%s \n", source);
  string_reverse(source, final);
  printf("%s \n", final);
  return 0;
}
