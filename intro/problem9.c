#include <stdio.h>

int main () {
	int num;
	printf("Give a multi digit number: ");
	scanf(" %d",&num);
	printf("The last digit of given number %d is %d\n", num, num%10);
	return 0;
}
