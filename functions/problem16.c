#include <stdio.h>
#define MAX 25 //can be changed easily

// first char* will contain source and second will contain target
void string_reverse(char *, char *);

int main () {
	char source[MAX], final[MAX]; //two strings, one for original and other for reverse
	printf("Enter a string (max %d characters): ", MAX);
	//scanf("%[^\n]%*c", source); //can accept spaces
	fgets(source, MAX, stdin); // can accept spaces (included in stdio.h)
	printf("%s \n", source);
	string_reverse(source, final); //final will have reverse of source
	printf("%s \n", final);
	return 0;
}

void string_reverse(char *origin, char *rev) {
	int f = 0, cnt = 0, j = 0; //These are just counter variables
	
	// '\0' represents the end of a string
	
	while ( *(origin + f) != '\0' ) { //counting the length of a string
		cnt++;
		f++;
	}
	
	for (int i = cnt - 1; i >= 0; i--)
	{
		*(rev + j) = *(origin + i);
		j++;
	}
	
	*(rev + j) = '\0'; // This is to make sure that the string terminates
	// if we do not use above line, some garbage characters may come along.
}
