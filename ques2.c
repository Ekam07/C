#include<stdio.h>
void main()
{
    int i;
    printf("uppercase alphabets:\n");
    for(i=65;i<=90;i++)
    {
        printf("ASCII value of %c is %d\n\n",i,i);
    }
    printf("lowercase alphabets:\n");
     for(i=97;i<=122;i++)
    {
        printf("ASCII value of %c is %d\n",i,i);
    }
}