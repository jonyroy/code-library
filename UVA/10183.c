//Accepted
#include<stdio.h>
#include<string.h>
#define MAX 1000
char store[500][500];
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
int First_search(char *c)
{
    int i,j,k,len1,len2,p,len3;
    len1=strlen(c);
    i=1;
    j=500;
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
int Second_search(char *c)
{
    int i,j,k,len1,len2,p,len3;
    len1=strlen(c);
    i=1;
    j=500;
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
int main()
{
  char a[MAX]={"1"},b[MAX]={"0"},sum[MAX],c[200],d[200];
  long int n,i,count;
  store[0][0]='0';
  store[0][1]='\0';
  store[1][0]='1';
  store[1][1]='\0';
  count=0;
  for(i=2;i<=500;i++)
  {
  addi_tion(a,b,sum);
  copystring(b,a);
  copystring(a,sum);
  copystring(store[i],sum);
  }
  while(1)
  {
      scanf("%s%s",c,d);
      if(c[0]=='0'&&d[0]=='0')
      break;
    i=First_search(c);
    n=Second_search(d);
    if(c[0]=='0')
    count=n-i;
    else
    count=(n-i)+1;
    printf("%ld\n",count);
  }
  return 0;
}
