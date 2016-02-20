#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   long int len;
   char ch[1000];
   while(scanf("%s",ch)!=EOF)
   {
       len=strlen(ch);
       if((ch[len-1]-48)%2==0)
       printf("Even Number\n");
       else
       printf("Odd Number\n");
   }
    return 0;
}
