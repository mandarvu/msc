#include <stdio.h>

float area(float *base, float *height) {
  return (1/2.0 * *base * *height);
}

void main() {
  float base, height;
  printf("Enter base and height: " );
  scanf("%f %f", &base, &height);
  printf("Area is %4.3f\n",area(&base, &height) );
}
