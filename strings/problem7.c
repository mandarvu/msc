#include <stdio.h>
#define MAX 20

int vowel_count(char *source) {
  int count = 0;
  while (*(source) != '\0') {
    switch (*(source)) {
      case 'A':
      case 'a':
        count++;
        break;
      case 'E':
      case 'e':
        count++;
        break;
      case 'I':
      case 'i':
        count++;
        break;
      case 'O':
      case 'o':
        count++;
        break;
      case 'U':
      case 'u':
        count++;
        break;
    }
    source++;
  }
  return count;
}

void main() {
  char source[MAX];
  int num;
  printf("Enter a string (max %d characters): ", MAX);
  fgets(source, MAX, stdin);
  num = vowel_count(source);
  printf("Number of vowels in '%s' is %3d\n",source, num);
}
