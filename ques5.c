#include<stdio.h>
void main()
{
    int n,i,fact;
    printf("enter any number: ");
    scanf("%d",&n);
    fact=n;
    for(i=n;i>1;i--)
    {
        fact= fact*(i-1);
    }
    printf("factorial of the number will be: %d",fact);
}