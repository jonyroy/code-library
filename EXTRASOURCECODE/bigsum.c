#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#define MAX 1000

void reverse(char *from,char *to)
{
  int len=strlen(from);
  int l;
  for(l=0;l<len;l++)
  to[l]=from[len-l-1];
  to[len]='\0';
}

void call_sum(char *first,char *sec,char *result)
{
   char F[MAX],S[MAX],Res[MAX];
   int f,s,sum,carry,i;

   f=strlen(first);
   s=strlen(sec);
   reverse(first,F);
   reverse(sec,S);
   for(i=0,carry=0;(i<f&&i<s);i++)
   {
   sum=(F[i]-'0')+(S[i]-'0')+carry;
   Res[i]=sum%10+'0';
   carry=sum/10;
   }
   for(;i<f;i++)
   {
       sum=(F[i])+carry-'0';
       Res[i]=sum%10+'0';
       carry=sum/10;
   }
   for(;i<s;i++)
   {
       sum=(S[i])+carry-'0';
       Res[i]=sum%10+'0';
       carry=sum/10;
   }
   if(carry!=0)
   Res[i]=carry+'0';
   Res[i]='\0';
   if(strlen(Res)==0)
   strcpy(Res,"0");
   reverse(Res,result);
}

int main()
{
    char a[101],sum[200];
    int d;
    while(1)
    {
        scanf("%s",a);
        if(strlen(a)==1)
        {
          d=atoi(a);
          if(d==0)
          break;
        }
    }
return 0;
}
