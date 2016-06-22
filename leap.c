#include <stdio.h>

int main(void) 
{
	int year;
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400)
			{
				printf("Leap Year");
			}
			else
				printf("Not a Leap Year");
		}
		else
		{
			printf("Leap year");
		}
	}
	else
		printf("Not a leap year");
		return 0;
}
