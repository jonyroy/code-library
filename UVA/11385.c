//Accepted
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000
char store[200][100];
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
long int First_search(char *c)
{
    long int i,j,k,len1,len2,p,len3;
    len1=strlen(c);
    i=1;
    j=50;
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
    return i;
}
int main()
{
  char a[MAX]={"1"},b[MAX]={"1"},sum[MAX],c[MAX],line[MAX];
  long int n,count,T,t,j,max=-1;
  long int i,r,v[200],len,k;
  bool test;
  store[1][0]='1';
  store[1][1]='\0';
  count=0;
  for(i=2;i<=50;i++)
  {
  addi_tion(a,b,sum);
  copystring(b,a);
  copystring(a,sum);
  copystring(store[i],sum);
  }
  scanf("%ld",&T);
  t=1;
  while(t<=T)
  {
    char d[200]={0};
    scanf("%d",&r);
    max=-1;
    for(i=1;i<=r;i++)
    {
    scanf("%s",c);
    v[i]=First_search(c);
    if(v[i]>max)
    max=v[i];
    }
    getchar();
    gets(line);
    len=strlen(line);
    j=1;
    for(i=0;i<len;i++)
    {
        if(isupper(line[i]))
        {
            if(j>r)
            break;
            k=v[j++];
            d[k]=line[i];
        }
    }
    for(i=max;i>=1;i--)
    {
        if(d[i]>=65&&d[i]<=90)
        break;
    }
    for(j=1;j<=i;j++)
    {
        if(d[j]>=65&&d[j]<=90)
        printf("%c",d[j]);
        else
        if(j<i)
        printf(" ");
    }
    printf("\n");
    t++;
  }
  return 0;
}

