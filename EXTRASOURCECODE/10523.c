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
int copystring(char *store,char *original)
{
    while(*store++=*original++);
    return 0;
}
int multiply(char *a,char *b,char *m)
{
    long int len1,len2,i,carry,k,t,j,mul;
    char F[MAX],S[MAX],tem[MAX];
    len1=strlen(a);
    len2=strlen(b);
    rev(a,F);
    rev(b,S);
    k=0;
    for(i=0;i<len1+len2;i++)
    {
        tem[i]='0';
    }
    for(i=0;i<len1;i++)
    {
        t=k;
        carry=0;
        for(j=0;j<len2;j++)
        {
            mul=(F[i]-'0')*(S[j]-'0')+carry+tem[t]-'0';
            tem[t]=mul%10+'0';
            carry=mul/10;
            t++;
        }
        if(carry>0)
        {
        tem[t]=carry+'0';
        t++;
        }
        k++;
    }
    tem[t]='\0';
    rev(tem,m);
    return 0;
}
int power(char *B,int P,char *result)
{
    char A[MAX]={"1"};
    int i;
    for(i=1;i<=P;i++)
    {
     multiply(B,A,result);
     copystring(A,result);
    }
    return 0;
}
int mul_int(char *a, int b,char *c)
{

    char d[MAX],e[MAX];
    int length,i,carry,tem;
    length=strlen(a);
    rev(a,d);
    carry=0;
    for(i=0;i<length;i++)
    {
        tem=(d[i]-48)*b+carry;
        e[i]=tem%10+48;
        carry=tem/10;
    }
   while(carry!=0)
    {
        e[i]=(carry%10)+48;
        carry=carry/10;
        i++;
    }
    e[i]='\0';
    rev(e,c);
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
int main()
{
    char A[MAX],b[MAX],c[MAX],result[MAX],e[MAX];
    int N,i;
    while(scanf("%d%s",&N,A)!=EOF)
    {
        char d[MAX]={"0"};
        for(i=1;i<=N;i++)
        {
           power(A,i,b);
           copystring(e,b);
           mul_int(e,i,c);
           add(c,d,result);
           copystring(d,result);
        }
        printf("%s\n",result);
    }
    return 0;
}
