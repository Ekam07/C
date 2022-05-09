#include<stdio.h>
void main()
{
   int n,i,j,flag;
   printf("enter any number:");
   scanf("%d",&n);
   printf(" prime factors of the number are:  ");
   for(i=1;i<=n/2;i++)
   {
       if(n%i==0)
       { 
            flag=0;
           for(j=2;j<=i/2;j++)
           {
              if(i%j==0)
                {
                    flag++;
                    break;
                }
            }
            if(flag==0 && i!=1)
             printf("%d ",i);
       }
   }
}
