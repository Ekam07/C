//WAp to find 2's complement of a binary number
#include<stdio.h>
#include<string.h>
void main()
{
   char b[50],b1[50],b2[50];
   int i,c=1;
   printf("enter any 8 digit binary number: ");
   gets(b);
   int l=strlen(b);
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
  for(i=l-1; i>=0; i--)
  {
     if(b1[i] =='1' && c==1)
     {
         b2[i]='0';
     }
     else if(b1[i] =='0' && c==1)
     {
        b2[i]='1';
        c=0;
     }
     else
     {
        b2[i]=b1[i];
     }
  }
  b2[l]='\0';
  printf("one's complement of binary number will be:");
  puts(b1);
  printf("two's complement of binary number will be:");
  puts(b2);
}
