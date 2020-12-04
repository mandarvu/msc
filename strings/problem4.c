#include <stdio.h>
#define MAX 20

//function to copy contents of one string to other
void copy_string(char *source, char *target) {
  while (*source != '\0') {
    *target = *source;
    source++;
    target++;
  }
  *target = '\0';
}

int main() { // Driver function
  char source[MAX], target[MAX];
  printf("Enter a string (Max %d characters)\n", MAX);
  fgets(source, MAX, stdin);
  copy_string(source, target);
  printf("%s\n", target);
  return 0;
}
