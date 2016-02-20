#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
#define MAX 1000
long long int div_rem(char *dividend,long long int divisor,char *q)
{
    char quotient[MAX];
    long long int k,i,tem,remainder,len,j;
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
    char a[MAX],b[MAX];
    long long int d,receiver;
    scanf("%s%lld",a,&d);
    receiver=div_rem(a,d,b);
    div_rem(a,d,b);
    printf("%s\n%lld",b,receiver);
    return 0;
}
