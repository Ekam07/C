//WAP to find 1's complement of a binary number
#include<stdio.h>
void main()
{
   int i;
   char b[8],b1[8];
   printf("enter any 8 digit binary number: ");
   gets(b);
   int l=strlen(b);
   printf("one's complement of binary number will be:");
   for(i=0;i<l;i++)
   {
      if(b[i]=='1')
      {
         b1[i]='0';
      }
      else if(b[i]=='0')
      {
         b1[i]='1';
      }
      b1[l]='\0';
   }
  puts(b1);
}
