# include <stdio.h>
# define PI 3.141

float circ_area(float rad) {
	return (PI * rad * rad) ;
}

int main() {
	float radius;
	printf("Enter radius: ");
	scanf("%f",&radius);
	printf("Area is %.3f\n",circ_area(radius));
	return 0;
}
