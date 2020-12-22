#include <stdio.h>
#define MAX 25

int str_length(char *source) {
  int cnt = 0, f = 0;

  while ( *(source + f) != '\0' ) {
    cnt++;
    f++;
  }
  return cnt;
}

void main() {
  char source[MAX];
  printf("Enter a string (max %d characters): ", MAX);
  scanf("%[^\n]%*c", source);
  printf("Lenght of '%s' = %5d\n",source, str_length(source));
}
