#include<stdio.h>
void main()
{
	int a=0,n,b=1,c,i;
    scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=2;i<n;i++)
	{
    	c=a+b;
    	a=b;b=c;
    	printf("%d\n",c);
	}
	
}
