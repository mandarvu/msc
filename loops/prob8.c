#include <stdio.h>
int main()    
{    
	int n,r,sum=0,temp;    
	printf("enter the number= ");    
	scanf("%d",&n);    
    temp=n;    
    while(n>0)    
	{    
		printf("%d", n%10);
		n /= 10;
    }    
	printf("\n");
}   
