//WAP to print all perfect numbers from 1 to N
#include<stdio.h>
void main()
{
   int N,i,sum;
   printf("enter the value of N: ");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   {
     sum=0;
       for(int j=1;j<=i/2;j++)
       {
          if(i%j==0)
          {
          sum=sum+j;  
          }
       }
       if(sum==i)
       {
         printf("%d\n",i);
       }
   }
}
