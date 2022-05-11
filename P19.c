//WAP to find 1's complement of a binary number
#include<stdio.h>
#include<string.h>
void main()
{
   int i;
   char b[32],c[32];
   printf("enter any 8 digit binary number: ");
   gets(b);
   int l=strlen(b);
   printf("one's complement of binary number will be:");
   for(i=0;i<l;i++)
   {
      if(b[i]=='1')
      {
         c[i]='0';
      }
      else if(b[i]=='0')
      {
         c[i]='1';
      }
      c[l]='\0';
   }
  puts(c);
}
