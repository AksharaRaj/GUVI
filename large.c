#include <stdio.h>

int main(void) 
{
	int n[3],max=0,i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]>max)
			max=n[i];
	}
	printf("Maximum Number is %d",max);
	return 0;
}
