//WAP to print sum of all prime numbers from 1 to N
#include<stdio.h>
void main()
{
   int n,i,flag,N,sum=0;
   printf("enter the value of N:");
   scanf("%d",&N);
   printf("sum of all prime numbers is:");
   for (n=2;n<=N;n++)
   {
       flag=0;
     for(i=2;i<=n/2;i++)
     {
         if(n%i==0)
        {
           flag++;
           break;
        }
     }
    if(flag==0)
    {
        sum = sum+n;
    }
   }
   printf("%d",sum);
}
