//WAP to find hcf of a number
#include<stdio.h>
void main()
{
    int n,m,i,min,hcf=1;
    printf("enter two numbers: ");
    scanf("%d%d",&n,&m);
    if(n>m)
        min=m;
    else
        min=n;
    if(n>0 && m>0)
    {
      for(i=1;i<=min;i++)
      {
          if(n%i==0 && m%i==0)
          {
            hcf=i;
          }
      }  
    }
    else
      printf("wrong input");
    printf("HCF of the numbers will be: %d",hcf);  
}
