#include <stdio.h>
#define MAX 20

void lower_case(char *source) {
  while (*source != '\0') {
    if ((*source <= 90) && (*source >= 65)) {
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
  lower_case(source);
  printf("%s\n", source);
  return 0;
}
