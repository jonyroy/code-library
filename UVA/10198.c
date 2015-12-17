//Accepted
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define MAX 1005
char store[MAX][500]={"1","2","5","13"};
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
int mul_int(char *a,long int b,char *c)
{

    char d[MAX],e[MAX];
    long int length,i,carry,tem;
    length=strlen(a);
    rev(a,d);
    carry=0;
    for(i=0;i<length;i++)
    {
        tem=(d[i]-48)*b+carry;
        e[i]=tem%10+48;
        carry=tem/10;
    }
    if(carry>0)
    {
        e[i]=carry+48;
        i++;
    }
    e[i]='\0';
    rev(e,c);
    return 0;
}
int main()
{
    int i,j,k,n;
    long int m=2;
    char a[MAX],b[MAX],c[MAX];
    for(i=4;i<=1000;i++)
    {
        mul_int(store[i-1],m,a);
        add(store[i-3],store[i-2],b);
        add(a,b,store[i]);
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%s\n",store[n]);
    }
    return 0;
}
