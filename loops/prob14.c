#include <stdio.h>
#include <math.h>

int main() {
	int num, tmp;
	float sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	for (float i = 1; i <= num; i++)
	{
		sum += (float) (1.0 * i / (i + 1));
	}
	printf("%f is the required sum\n",sum); 
	return 0;
}

