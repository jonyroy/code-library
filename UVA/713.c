//Accepted
#include<stdio.h>
#include<string.h>
#define MAX 1000
int remozero(char *a,char *b)
{
    int i,j,k,len;
    char c[MAX];
    len=strlen(a);
    for(i=0;i<len;i++)
    {
       c[i]=a[len-i-1];
    }
    i=0;
    while(c[i]<'1')
    {
        i++;
    }
    j=i;
    k=0;
    for(;j<len;j++)
    {
        b[k]=c[j];
        k++;
    }
    b[k]='\0';
    return 0;
}
int inv(char *a,char *b)
{

    int len,i,j;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        b[i]=a[len-i-1];
    }
    b[len]='\0';
    return 0;
}
int add(char *a,char *b,char *c)
{
        char first[MAX]={},second[MAX]={};
        char sumation[MAX];
        int lens,lenf,tem,sum,carry,i;
        inv(a,first);
        inv(b,second);
        lenf=strlen(first);
        lens=strlen(second);
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
        inv(sumation,c);
    return 0;
}
int main()
{
    char a[MAX],b[MAX],c[MAX],d[MAX],e[MAX],f[MAX];
    long int i,j,k,len,n;
    while(scanf("%ld",&n)!=EOF)
    {
    for(i=1;i<=n;i++)
    {
    scanf("%s%s",a,b);
    remozero(a,c);
    remozero(b,d);
    add(c,d,e);
    remozero(e,f);
    printf("%s\n",f);
    }
    }
    return 0;
}
