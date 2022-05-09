#include<stdio.h>
void main()
{
    int n,m=0,d;
    printf("enter the number to print in words:");
    scanf("%d",&n);

    while(n!=0)
    {
        m = m*10+ n%10;
        n=n/10;
    }
    printf("number will be: ");
     while(m!=0)
     {
         d = m%10;
            if(d==0)
             printf("zero\t");
             else if(d==1)
             printf("one\t");
             else if(d==2)
             printf("two\t");
             else if(d==3)
             printf("three\t");
             else if(d==4)
             printf("four\t");
             else if(d==5)
             printf("five\t");
             else if(d==6)
             printf("six\t");
             else if(d==7)
             printf("seven\t");
             else if(d==8)
             printf("eight\t");
             else if(d==9)
             printf("nine\t");
             m=m/10;
     }
}
