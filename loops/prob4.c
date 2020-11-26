#include <stdio.h>

int leap_chk(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		}
		return 1;
	}	
	else 
		return 0;
}	

int main()
{
	for (int i = 1900; i <= 2100; i++)
	{
		if (leap_chk(i) == 1)
			printf("%d  ", i);
	}
	printf("\n");
}

