//Accepted
#include<stdio.h>
#include<string.h>
#define MAX 2000
char store[2000][1000]={"\0","1"};
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
int mul_int(char *a,int b,char *c)
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
    int i,j,k,u;
    char a[2000]={"1"},b[2000],c[2000]={"1"},d[2000],f[2000];
    for(i=2;i<=2000;i++)
    {
       mul_int(a,2,b);
       add(b,c,d);
       add(c,a,f);
       strcpy(c,f);
       strcpy(a,d);
       strcpy(store[i],d);
    }
    while(1)
    {
        scanf("%d",&u);
         if(u==0)
         break;
        printf("%s\n",store[u]);
    }
    return 0;
}
