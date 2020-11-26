# include <stdio.h>

//function to find the biggest of three numbers
int biggest(int num1, int num2, int num3) { 
	return (num1 >= num2 ? (num1 >= num3 ? num1 : num3) : (num2 >= num3 ? num2: num3));
}

int main() {
	int x, y, z;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &x, &y, &z);

	printf("%d is the biggest of all\n",biggest(x,y,z));
	return 0;
}
