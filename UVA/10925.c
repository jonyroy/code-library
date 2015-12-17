//Accepted
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define MAX 1005
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
int add(char *a,char *b,char *c)
{
        char first[MAX]={},second[MAX]={};
        char sumation[MAX];
        int lens,lenf,tem,sum,carry,i;
        lenf=strlen(a);
        lens=strlen(b);
        rev(a,first);
        rev(b,second);
        if(lens>lenf)
        tem=lens;
        else
        tem=lenf;
        carry=0;
        for(i=0;i<tem;i++)
        {
         if(first[i]=='\0')
         first[i]='0';
         else
         if(second[i]=='\0')
         second[i]='0';
         sum=first[i]-'0'+second[i]-'0'+carry;
         sumation[i]=sum%10+'0';
         carry=sum/10;
        }
        if(carry>0)
        {
        sumation[i]=carry+'0';
        i++;
        }
        sumation[i]='\0';
        rev(sumation,c);
    return 0;
}
int div_rem(char *dividend,int divisor,char *q)
{
    char quotient[MAX];
    int k,i,tem,remainder,len,j,rem;
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
    while(quotient[i]=='0')
    {
        i=i+1;
    }
    if(i==len)
    return 0;
    k=0;
    for(j=i;j<len;j++)
    {
        q[k++]=quotient[j];
    }
    q[k]='\0';
    return 100;
}
int main()
{
    char a[MAX],c[MAX],d[MAX];
    int m,n,i,j=1,rem;
    while(scanf("%d%d",&m,&n))
    {
    if(m==0&&n==0)
    break;
    char b[MAX]={"0"};
    for(i=0;i<m;i++)
    {
        scanf("%s",a);
        add(a,b,c);
        strcpy(b,c);
    }
    printf("Bill #%d costs %s: ",j,c);
    rem=div_rem(c,n,d);
    if(rem==0)
    printf("each friend should pay 0\n\n");
    else
    printf("each friend should pay %s\n\n",d);
    j++;
    }
    return 0;
}
