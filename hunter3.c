#include<stdio.h>
void main()
{
    int a[200],i,j,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    for(i=0;i<n;i++)
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            printf("\nthe number %d equals its index %d",a[i],i);
        }
    }
}
