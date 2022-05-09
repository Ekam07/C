//WAP to check whether a number is armstrong or not
#include<stdio.h>
void main()
{
    int n,m,num,sum=0;
    printf("enter the number:");
    scanf("%d",&m);
    n=m;
    while(n!=0)
    {
       num=n%10; 
       sum = sum + (num*num*num);
       n=n/10;
    }
    if(sum==m)
      printf("it is an armstrong number");
    else
    printf("it is not an armstrong number");  
}
