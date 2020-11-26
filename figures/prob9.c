#include <stdio.h>

int main() {
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= i; j--) //inserting spaces to pretty print
			printf(" "); 
		for (int j = 1; j <= i; j++) //go till the outer loop's bound
		{
			printf("%d",j);
			if (j == i) // When you reach it, come back down to 1
			{
				for (int k = i-1; k >= 1; k--) // skip the highest number by 'i-1' as it is already there 
					printf("%d",k);
			}
		}
		printf("\n");
	}
	return 0;
}
