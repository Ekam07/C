#include<stdio.h>
#include<string.h>
int length (char*);
char* reverse(char*);
 int main()
{
    char string[]="computer";
printf ("%d",length("Computer"));
printf ("\n%s",reverse(string));
return(0);
}
char* reverse(char *p)
{
int l,i;
char t;
for (l=0; *(p+l)!='\0' ;l++);
for (i=0;i<l/2;i++)
{
t=*(p+i);
*(p+i)=*(p+l-1-i);
*(p+l-1-i)=t;
}
return(p);
}
int length(char *p)
{
int i;
for (i=0;*(p+i)!='\0' ;i++);
return(i);
}