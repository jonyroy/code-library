//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 2000
char store[2000][500]={"0","0","1","2"};
int copystring(char *stor,char *original)
{
    while(*stor++=*original++);
    return 0;
}
int rev(char *a,char *b)
{
    long int i,j,len;
    i=0;
    len=strlen(a);
    while(len)
    {
        b[i++]=a[len-1];
        len--;
    }
    b[i]='\0';
    return 0;
}
int addi_tion(char *a,char *b,char *sumation)
{
    char f[MAX]={},s[MAX]={},sum[MAX];
    long int i,j,len1,len2,tem,temsum,carry;
    rev(a,f);
    rev(b,s);
    len1=strlen(f);
    len2=strlen(s);
    if(len1>len2)
    tem=len1;
    else
    tem=len2;
    carry=0;
    for(i=0;i<tem;i++)
    {
        if(f[i]=='\0')
        f[i]='0';
        else
        if(s[i]=='\0')
        s[i]='0';
        temsum=(f[i]-48)+(s[i]-48)+carry;
        sum[i]=temsum%10+48;
        carry=temsum/10;
    }
    if(carry>0)
    {
        sum[i]=carry+48;
        i++;
    }
    sum[i]='\0';
    rev(sum,sumation);
    return 0;
}
int fibonacci()
{
  char a[MAX],b[MAX],sum[MAX];
  long int n,i;
  for(i=4;i<=2000;i++)
  {
  addi_tion(store[i-2],store[i-1],store[i]);
  }
    return 0;
}
int sub(char *large,char *small,char *res)
{
    int len1,len2,i,sub,carry=0;
    char L[MAX],S[MAX]={},result[MAX];
    len1=strlen(large);
    len2=strlen(small);
    rev(large,L);
    rev(small,S);
    if(len1==len2)
    {
        if(strcmp(L,S)==0)
        {
            res[0]='0';
            res[1]='\0';
            return 0;
        }
    }
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
    rev(result,res);
    return 0;
}
int div_rem(char *dividend,int divisor,char *q)
{
    char quotient[MAX];
    int k,i,tem,remainder,len,j;
    len=strlen(dividend);
    remainder=0;
    for(i=0;i<len;i++)
    {
      tem=remainder*10+dividend[i]-48;
      quotient[i]=tem/divisor+48;
      remainder=tem%divisor;
    }
    quotient[i]='\0';
    len=strlen(quotient);
    i=0;
    while(quotient[i]<'1')
    {
        i++;
    }
    k=0;
    for(j=i;j<len;j++)
    {
        q[k++]=quotient[j];
    }
    q[k]='\0';
    return remainder;
}
int main()
{
    int a,len,i=1;
    char b[MAX],c[10]={"1"},d[MAX],n[MAX];
    fibonacci();
    while(scanf("%d",&a))
    {
        if(a==0)
        break;
        else if(a==1)
        {
            printf("Set %d:\n0\n",i);
            i++;
            continue;
        }
        else if(a==2)
        {
            printf("Set %d:\n1\n",i);
            i++;
            continue;
        }
        addi_tion(store[a],store[a-1],b);
        sub(b,c,d);
        div_rem(store[a],2,b);
        len=strlen(store[a]);
        addi_tion(d,b,n);
        if(store[a][len-1]=='0'||(store[a][len-1]-48)%2==0)
        sub(n,c,n);
        printf("Set %d:\n%s\n",i,n);
        i++;
    }
    return 0;
}
