//Accepted
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define MAX 200
char store[200][200];
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
  b[0]='1';
  b[1]='\0';
  a[0]='1';
  a[1]='\0';
  store[0][0]='1';
  store[0][1]='\0';
  store[1][0]='1';
  store[1][1]='\0';
  for(i=2;i<=110;i++)
  {
  addi_tion(a,b,sum);
  copystring(store[i],sum);
  copystring(b,a);
  copystring(a,sum);
  }
    return 0;
}
int Second_search(char *c)
{
    int i,j,k,len1,len2,p,len3;
    len1=strlen(c);
    i=1;
    j=110;
    while(i<j)
    {
      k=(i+j)/2;
      len2=strlen(store[k]);
      if(len1==len2)
      {
          p=strcmp(c,store[k]);
          if(p==0)
          return k;
          else
          if(p<0)
          j=k;
          else
          i=k+1;
      }
      else
      {
          if(len1>len2)
          i=k+1;
          else
          j=k;
      }
    }
    return (i-1);
}
int Find_value(char *a,char *b)
{
    int len,i,j=1;
    char sum[200]={"0"};
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        if(a[i]=='1')
        {
           addi_tion(store[j],sum,sum);
        }
        j++;
    }
    copystring(b,sum);
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
int main()
{

    char a[200],b[200],c[200],d[200],s[200],ch;
    int i,j,k,l,len,len1,len2,t,T=0;;
    fibonacci();
    while(scanf("%s%s",a,b)!=EOF)
    {
        t=0;
        if(T>0)
        printf("\n");
        if(a[0]=='0'&&b[0]=='0')
        {
            printf("0\n");
            T++;
            continue;
        }
        Find_value(a,c);
        Find_value(b,d);
        addi_tion(c,d,a);
        k=Second_search(a);
        for(i=k;i>=1;i--)
        {
            len1=strlen(a);
            len2=strlen(store[i]);
            if(len1>len2)
            {

                sub(a,store[i],a);
                s[t]='1';
                t++;
            }
            else if(len1==len2)
            {
                if(strcmp(a,store[i])>=0)
                {
                sub(a,store[i],a);
                s[t]='1';
                t++;
                }
                else
                {
                    s[t]='0';
                    t++;
                }
            }
            else
            {
                s[t]='0';
                t++;
            }
        }
        s[t]='\0';
        rev(s,d);
        printf("%s\n",s);
        T++;
    }
    return 0;
}
