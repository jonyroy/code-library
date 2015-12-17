//Accepted
#include<stdio.h>
#include<string.h>
#define MAX 10000
char store[5000][1500];
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
int main()
{
  char a[MAX],b[MAX],sum[MAX];
  long int n,i;
  b[0]='0';
  b[1]='\0';
  a[0]='1';
  a[1]='\0';
  store[0][0]='0';
  store[0][1]='\0';
  store[1][0]='1';
  store[1][1]='\0';
  for(i=2;i<=5000;i++)
  {
  addi_tion(a,b,sum);
  copystring(store[i],sum);
  copystring(b,a);
  copystring(a,sum);
  }
  while(scanf("%d",&n)!=EOF)
  {
      printf("%s\n",store[n]);
  }
  return 0;
}
