#include<stdio.h>
#include<string.h>
#define MAX 10000
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
int remov(char *a,char *b)
{
    int len,i=0,k=0,j;
    len=strlen(a);
    while(a[i]!='0')
    {
       i++;
    }
    for(j=i;j<len;j++)
    {
        b[k]=a[j];
        k++;
    }
    b[k]='\0';
    return 0;
}
int add(char *a,char *b,char *c)
{
        char first[MAX]={},second[MAX]={};
        char sumation[MAX],f[MAX],s[MAX];
        int lens,lenf,tem,sum,carry,i,k,len,j;
        rev(a,f);
        remov(f,first);
        rev(b,s);
        remov(s,second);
        printf("%s\n%s\n",first,second);
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
        len=strlen(sumation);
        i=0;
    while(sumation[i]!='0')
    {
        i++;
    }
    k=0;
    for(j=i;j<len;j++)
    {
        c[k++]=sumation[j];
    }
    c[len]='\0';
    return 0;
}
int main()
{
    char a[MAX],b[MAX],c[MAX];
    long n,i;
    while(scanf("%ld",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%s%s",a,b);
            add(a,b,c);
            printf("%s\n",c);
        }
    }
    return 0;
}
