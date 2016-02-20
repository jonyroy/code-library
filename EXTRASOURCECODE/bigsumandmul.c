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
void call_mul(char *first,char *sec,char *result)
{
  char F[MAX],S[MAX],Res[MAX];
  int f_len,s_len,sum,carry,i,res,t_le,r,f;
   f_len=strlen(first);
   s_len=strlen(sec);
   reverse(first,F);
   reverse(sec,S);
   t_len=f_len+s_len;
   r=-1;

   for(f=0;f<=t_len;f++)
   Res[f]='0';
   Res[f]='\0';
   for(s=0;s<s_len;s++)
   {
       carry=0;
       for(f=0;f<f_len;f++)
       {

       res=(F[f]-'0')*(S[s]-'0')+carry+(Res[f+s]-'0');
       Res[f+s]=res%10+'0';
       carry=res/10;
       if(f+s>r)
       r=f+s;
        }
   while(carry!=0)
   {
     res=carry+Res[f+s]-'0';
     carry=res/10;
     Res[f+s]=res%10+'0';
     if(f+s>r)
     r=f+s;
     f++;
   }
}
for(;r>0&&Res[r]=='0';r--)
Res[r+1]='\0';
reverse(Res,result);
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
   if(carry!0)
   Res[i]=carry+'0';
   Res[i]='\0';
   if(strlen(Res)==0)
   strcpy(Res,"0");
   reverse(Res,result);
}

int main()
{
return 0;
}
