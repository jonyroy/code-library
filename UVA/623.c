//Accepted
#include<stdio.h>
#include<string.h>
#define MAX 3570
char store[1000][2569];
int rev(char *a,char *b);
int multiplication(char *a,char *b,char *m);
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
int copystring(char *store,char *orginal)
{
    while(*store++=*orginal++);
    return 0;
}
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
int multiplication(char *a,char *b,char *m)
{
    int len1,len2,i,carry,k,t,j,mul,n;
    char F[MAX],S[MAX],c[MAX];
    rev(a,F);
    rev(b,S);
    len1=strlen(F);
    len2=strlen(S);
    i=0;
    for(i=0;i<len1+len2-1;i++)
    {
        c[i]='0';
    }
    k=0;
    for(i=0;i<len1;i++)
    {
        t=k;
        carry=0;
        for(j=0;j<len2;j++)
        {
            mul=(F[i]-'0')*(S[j]-'0')+carry+(c[t]-'0');
            c[t]=mul%10+'0';
            carry=mul/10;
            t++;
        }
        if(carry>0)
        {
        c[t]=carry+'0';
        t++;
        }
        k++;
    }
    c[t]='\0';
    rev(c,m);
    return 0;
}
int main()
{
    char a[MAX],m[MAX],c[MAX],dd[MAX];
    int  i,j,f,n;
    long int len,p,sum;
    a[0]='1';
    a[1]='\0';
    for(i=1;i<=30;i++)
    {
    n=i;
    j=0;
    while(n!=0)
    {
        dd[j]=(n%10)+48;
        n=n/10;
        j++;
    }
    dd[j]='\0';
    rev(dd,c);
    multiplication(a,c,m);
    copystring(a,m);
    copystring(store[i],m);
    }
    store[0][0]='1';
    store[0][1]='\0';
    while(scanf("%d",&f))
        {
            long long int mmm=
    printf("%s\n",store[f]);
        }
    return 0;
}
