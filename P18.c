//WAP to print fibonacci series
#include<stdio.h>
void main()
{
    int n,i=2;
    int f[n];
    printf("enter the no of values to print  in series :");
    scanf("%d",&n);
    printf("fibonacci series is:\n");
    f[0]=0;
    f[1]=1;
    printf("%d\n%d\n",f[0],f[1]);
    while(i!=n)
    {
       f[i]=f[i-1]+f[i-2];
       printf("%d\n",f[i]);
       i++;
    }
}
