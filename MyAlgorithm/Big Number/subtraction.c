#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define MAX 10000
int rev(char *a,char *b)
{
    int len,i,j=0;
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]='\0';
    return 0;
}
int sub(char *large,char *small,char *result)
{
    int len1,len2,i,sub,carry=0;
    char L[MAX],S[MAX]={};
    len1=strlen(large);
    len2=strlen(small);
    rev(large,L);
    rev(small,S);
    for(i=0;i<len1;i++)
    {
     if(L[i]<S[i])
     {
         L[i]=L[i]+10;
         if(S[i+1]=='\0')
         S[i+1]=S[i+1]+49;
         else
         S[i+1]=S[i+1]+1;
     }
     if(S[i]=='\0')
     S[i]='0';
     sub=(L[i]-48)-(S[i]-48)+carry;
     result[i]=sub%10+48;
     carry=sub/10;
    }
    i--;
    while(result[i]<'1')
    {
        i--;
    }
    result[i+1]='\0';
    return 0;
}
int main()
{
   char large[MAX],small[MAX],result[MAX];
   int i,len,len1,len2;
   while(scanf("%s%s",large,small)!=EOF)
   {
   len1=strlen(large);
   len2=strlen(small);
   if(len1>len2)
   {
   sub(large,small,result);
   len=strlen(result);
   for(i=len-1;i>=0;i--)
   {
       printf("%c",result[i]);
   }
   }
   else
   if(len1<len2)
   {
   sub(small,large,result);
   len=strlen(result);
   result[len]='-';
   for(i=len;i>=0;i--)
   {
       printf("%c",result[i]);
   }
   }
   else
   {
       if(strcmp(large,small)<0)
       {
       sub(small,large,result);
       len=strlen(result);
       result[len]='-';
       for(i=len;i>=0;i--)
       printf("%c",result[i]);
       }
       else if(strcmp(large,small)==0)
       printf("0");
       else
       {
       sub(large,small,result);
       len=strlen(result);
       for(i=len-1;i>=0;i--)
       printf("%c",result[i]);
       }
   }
   printf("\n");
   }
   return 0;
}
