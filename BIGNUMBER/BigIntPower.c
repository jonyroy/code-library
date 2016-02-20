#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 200000
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
int copystring(char *store,char *original)
{
    while(*store++=*original++);
    return 0;
}
int multiply(char *a,char *b,char *m)
{
    long int len1,len2,i,carry,k,t,j,mul;
    char F[MAX],S[MAX],tem[MAX];
    len1=strlen(a);
    len2=strlen(b);
    rev(a,F);
    rev(b,S);
    k=0;
    for(i=0;i<len1+len2;i++)
    {
        tem[i]='0';
    }
    for(i=0;i<len1;i++)
    {
        t=k;
        carry=0;
        for(j=0;j<len2;j++)
        {
            mul=(F[i]-'0')*(S[j]-'0')+carry+tem[t]-'0';
            tem[t]=mul%10+'0';
            carry=mul/10;
            t++;
        }
        if(carry>0)
        {
        tem[t]=carry+'0';
        t++;
        }
        k++;
    }
    tem[t]='\0';
    rev(tem,m);
    return 0;
}
int main()
{
    char B[MAX],P[MAX],result[MAX],A[MAX];
    long long int i,len;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%s%s",B,P);
    copystring(A,B);
    len=atol(P);
    i=1;
    if(len==0)
    {
        result[0]='1';
        result[1]='\0';
    }
    else
    if(len==1)
    {
     copystring(result,B);
    }
    else
    do
    {
      multiply(B,A,result);
      copystring(B,result);
    } while(++i<len);
    printf("%s\n",result);
    return 0;
}
