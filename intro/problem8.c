#include <stdio.h>

int main () {
	char character;
	printf("Give a CAPITAL character.\n>>> ");
	scanf(" %c", &character);
	printf("The given char is %c\n",character);
	printf("The lowercase of given char is %c\n",character+32);
	return 0;
}

