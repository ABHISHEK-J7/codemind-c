#include <stdio.h>
int main()
{
	int i,r,k,count=0,a;
	scanf("%d%d%d",&i,&r,&k);
	for(a=i;a<=r;a++)
	{
		if(a%k==0)
		count++;
	}
	printf("%d",count);
}