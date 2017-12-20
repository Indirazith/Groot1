#include<stdio.h>
void main()
{
int i,k=0;
char a[10],b[]={'a','e','i','o','u','A','E','I','O','U'};
scanf("%c",&a);
for(i=0;i<10;i++)
{
    if(a[0]==b[i])
 k=2;
}
if(k==2)
printf("Vowel");
else
printf("Constant");
}
