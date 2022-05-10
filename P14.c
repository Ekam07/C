//WAP to check a number is perfect or not
#include<stdio.h>
void main()
{
   int n,i,sum=0;
   printf("enter any number:");
   scanf("%d",&n);
   for(i=1;i<=n/2;i++)
   {
       if(n%i==0)
       {
         sum=sum+i;  
        }
   }
   if(sum==n)
   {
       printf("it is a perfect number");
   }
   else
   {
       printf("it is not a perfect number");
   }
}
