#include <stdio.h>

int main()
{
    int z,i,j,cout=0;
   char a[100],b[100];
   scanf("%s",&a);
   scanf("%s",&b);
   for(i=0;a[i]!='\0';i++)
   printf("");
   for(j=0;b[j]!='\0';j++)
   {
   cout++;}
   for(z=0;b[z]!='\0';z++)
   {
       
       b[i]=a[z];
       i++;
   }
   for(z=0;z<i-5;z++)
   {
       if(z==cout)
       printf(" ");
   printf("%c",b[z]);
   }
  
}
