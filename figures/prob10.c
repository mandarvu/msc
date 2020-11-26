#include <stdio.h>

int main() {
	for (int i = 6; i >= 1; i--)
	{
		for (int j = 6; j >= i; j--)
			printf(" ");
		for (int j = 65; j <= 64 + i; j++)
			printf("%c ",j);
		printf("\n");
	}
	return 0;
}
