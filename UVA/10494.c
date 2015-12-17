//Accepted
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
long int div_rem(char *dividend,long int divisor,char *q);
int main()
{
    char a[1000],s[1000],d[50],c[50],si,q[1000],ch[1000];
    long int b,i,j,len,t;
    long int f,k,l,remainder;
    while(gets(s))
    {
        len=strlen(s);
        j=0;
        i=0;
        do
        {
        a[j++]=s[i];
        i++;
        }while(s[i]!=32);
        a[j]='\0';
        if(atoi(a)==0)
        {
            printf("0\n");
            continue;
        }
        k=0;
        i=len-1;
        while(s[i]!=32)
        {
         d[k++]=s[i];
         i--;
        }
        int n=0;
        while(n<len)
        {
            if(s[n]=='/'||s[n]=='%')
            {
            si=s[n];
            break;
            }
            n++;
        }
        l=0;
        for(i=k-1;i>=0;i--)
        {
            c[l++]=d[i];
        }
        c[l]='\0';
        f=atol(c);
        remainder=div_rem(a,f,q);
        if(si=='/')
        printf("%s\n",q);
        else
        printf("%ld\n",remainder);
    }
    return 0;
}
long int div_rem(char *dividend,long int divisor,char *q)
{
    char quotient[1000];
    long int k,i,tem,remainder,len,j;
    len=strlen(dividend);
    remainder=0;
    for(i=0;i<len;i++)
    {
      tem=remainder*10+dividend[i]-48;
      quotient[i]=tem/divisor+48;
      remainder=tem%divisor;
    }
    quotient[i]='\0';
    if(atol(quotient)==0)
    {
        q[0]='0';
        q[1]='\0';
    return remainder;
    }
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
