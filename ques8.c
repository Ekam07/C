//WAP to find a number is prime or not
#include<stdio.h>
void main()
{
   int n,i,flag=0;
   printf("enter any number:");
   scanf("%d",&n);
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
       {
           flag++;
       }
      
   }
   if(flag>0)
       printf("it is not a prime number");
   else
      printf("it is a prime number");
}