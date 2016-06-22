#include <stdio.h>

int main(void) 
{
	int n,n1,d,s=0;
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
	if(s==n1)
		printf("Armstrong Number");
	else
		printf("Not an Armstrong Number");
	return 0;
}
