// WAP to print all strong numbers from 1 to N
#include<stdio.h>
void main()
{
    int N,fact,sum,num,p;
    printf("enter the value of N:");
    scanf("%d",&N);
    for(int j=1;j<=N;j++)
    {
        sum=0;
        p=j;
    while(p!=0)
    {
        fact=1;
       num=p%10;
       for( int i=num;i>=1;i--)
       {
           fact= fact*i;
       }
       sum = sum+fact;
       p=p/10;
    }
    if(sum==j)
    {
        printf("%d\n",sum);
    }
    }

}