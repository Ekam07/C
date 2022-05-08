
//wap to print power of a number
#include<stdio.h>
void main()
{
    int n,pow,i,m;
    printf("enter any number:");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&pow);
    printf("The number will be: ");
    m=n;
    for(i=1;i<pow;i++)
    {   
        n=n*m;
    }
    printf("%d",n);
}

