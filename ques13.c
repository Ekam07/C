//WAP to print all armstrong numbers from 1 to N
#include<stdio.h>
void main()
{
    int n,N,i,num,sum;
    printf("enter the value of N:");
    scanf("%d",&N);
    printf("armstrong numbers are: ");
    for(i=1;i<=N;i++)
    {
        sum=0;
        n=i;
        while(n!=0)
        {
           num=n%10; 
           sum = sum + (num*num*num);
           n=n/10;
        }
        if(sum==i)
        {
         printf("%d\n",i);
        }
    } 
} 
