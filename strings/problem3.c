#include <stdio.h>
#define MAX 20

void switch_case(char *source) {
  while (*source != '\0') {
    if ((*source <= 122) && (*source >= 97 )) {
      *source -= 32;
      source++;
    }
    else if ((*source <= 90) && (*source >= 65)) {
      *source += 32;
      source++;
    }
    else
      source++;
  }
}

int main() {
  char source[MAX];
  printf("Enter a string (Max %d characters)\n", MAX);
  fgets(source, MAX, stdin);
  switch_case(source);
  printf("%s\n", source);
  return 0;
}
