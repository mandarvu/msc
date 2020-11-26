#include <stdio.h>

int main () {
	char character;
	printf("Give a character.\n>>> ");
	scanf(" %c", &character);
	printf("%d %c\n",character, character);
	return 0;
}
