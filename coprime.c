#include<stdio.h>
void main()
{
	int i,gcd=0,l,u;
	scanf("%d %d",&l,&u);
	for(i=1;i<=l&&i<=u;i++)
	{
    	if((u%i==0)&&(l%i==0))
    	{
        	gcd=i;
    	}
	}
if(gcd==1)
printf("Co-Prime");
else
printf("not");
}
