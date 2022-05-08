#include<stdio.h>
void main()
{
   int n,fact,i;
   printf("enter any number:");
   scanf("%d",&n);
   printf("factors of the number are:");
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {
           printf("%d\n",i);
       }
       else
       {
           continue;
       }
   }
}