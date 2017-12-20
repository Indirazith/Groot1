#include<stdio.h>
void main()
{
    int a,b,n,t,i=0,sum=0;
    long cout=0;
    scanf("%d",&n);
    sum=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum*a;
        n=n/10;
    }
    printf("%d",sum);
}
