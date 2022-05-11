//WAP  to check a number is strong or not
 #include<stdio.h>
void main()
{
    int n,fact,sum=0,num,p,i;
    printf("enter any number:");
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        fact=1;
       num=n%10;
       for( i=num;i>=1;i--)
       {
           fact= fact*i;
       }
       sum = sum+fact;
       n=n/10;
    }
    if(sum==p)
    {
        printf("it is a strong number");
    }
    else
    {
        printf("it is not a strong number");
    }

}
