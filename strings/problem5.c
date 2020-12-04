#include <stdio.h>
#define MAX 40

/* A function to merge two strings */ 
void merge_string(char *source1, char *source2, char *target) {
  while (*source1 != '\0') {
    *target = *source1;
    source1++;
    target++;
  }

  while (*source2 != '\0') {
    *target = *source2;
    source2++;
    target++;
  }

  *target = '\0';
}

int main() { // Driver function
  char source1[MAX], source2[MAX], target[MAX];
  printf("Enter a string (Max %d characters)\n", MAX);
  scanf("%[^\n]%*c", source1); //Scans string until '\n' is encountered
  printf("Enter another string (Max %d characters)\n", MAX);
  scanf("%[^\n]%*c", source2); //Scans string until '\n' is encountered
  merge_string(source1, source2, target);
  printf("%s\n", target);
  return 0;
}
