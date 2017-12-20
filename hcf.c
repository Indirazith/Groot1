#include<stdio.h>
void main()
{
	int i,hcf=0,l,u;
    scanf("%d %d",&l,&u);
	for(i=1;i<=l&&i<=u;i++)
	{
    	if((u%i==0)&&(l%i==0))
    	{
        	hcf=i;
    	}
	}
	printf("%d",hcf);
}
