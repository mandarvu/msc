# include <stdio.h>
// Program to swap value of two vars.
void vswapi(int *p,int *q)
{
    int ll;
    ll = *p;
    *p = *q;
    *q = ll;
}

int main() {
	int v1,  v2, tmp;
	printf("Enter two numbers. :");
	scanf("%d %d",&v1, &v2);
	printf("v1 = %d\nv2 = %d\n", v1,v2);
	printf("After swapping\n");
	vswapi(&v1, &v2);
	printf("v1 = %d\nv2 = %d\n", v1,v2);
	return 0;
}
