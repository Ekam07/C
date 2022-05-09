//WAP to find LCM of a number
#include<stdio.h>
void main()
{
    int n,m,i,max;
    printf("enter two numbers: ");
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        max=n;
    }
    else
    {
        max=m;
    }
    if(n>0 && m>0)
    {
      while(1)
      {  
        if(max%n==0 && max%m==0)
        {
            printf("lcm of  %d and %d will be: %d",m,n,max);  
            break;
        }
        max++;  
      }  
    }
    else
    {
      printf("wrong input");
    }
}
