#include <stdio.h>

void vswapi(int *p,int *q)
{
    int ll = *p;
    *p = *q;
    *q = ll;
}

void main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d",&num1, &num2 );
  printf("num1 = %5d\nnum2 = %5d\n",num1, num2 );
  vswapi(&num1, &num2);
  printf("After swapping\n");
  printf("num1 = %5d\nnum2 = %5d\n",num1, num2 );
}
