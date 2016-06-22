#include <stdio.h>

int main(void) {
	int temp,c=0,n;
	scanf("%d",&n);
while(n!=0)
{
	temp=n%10;
	c++;
	n=n/10;
}
printf("%d",c);
	return 0;
}
