#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int gcd(int x,int y)
{
    int r;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}
int main()
{
    char n[100],m[100],sig[100];
    int a[100],b[100],c[100],d,i,len,j=1,k=0,l=1,p;
    int g,u,f[100],h[100],sum,gc,sign,tem,v,r,q,t,val;
    while(gets(n))
    {
    j=1;k=0;l=1;
    len=strlen(n);
    for(i=0;i<=len;i++)
    {
        if(n[i]=='-'||n[i]=='+'||n[i]=='%'||n[i]=='*'||n[i]=='\0'||n[i]=='/')
        {
           if(n[i]=='-'||n[i]=='+'||n[i]=='%'||n[i]=='*')
           sig[j++]=n[i];
           m[k]='\0';
           a[l++]=atoi(m);
           k=0;
        }
        else
        {
            if(n[i]!=32)
            m[k++]=n[i];
        }
    }
    k=1;
    int w=2,digit;
    digit=l-1;
    sign=j-1;
    for(i=1;i<=digit/2;i++)
    {
        b[i]=a[k];
        c[i]=a[w];
        k=k+2;
        w=w+2;
    }
    for(i=1;i<=sign;i++)
    {
        if(sig[i]=='%')
        {
          t=digit/2;
          tem=b[i+1];
          b[i+1]=c[i+1];
          c[i+1]=tem;
          b[i]=b[i]*b[i+1];
          c[i]=c[i]*c[i+1];
          for(v=i;v<sign;v++)
          {
              sig[v]=sig[v+1];
          }
          for(v=i+1;v<t;v++)
          {
              b[v]=b[v+1];
              c[v]=c[v+1];
          }
          i--;
        sign=sign-1;
        digit=digit-2;
        }
    }
    for(i=1;i<=sign;i++)
    {
        if(sig[i]=='*')
        {
          t=digit/2;
          b[i]=b[i]*b[i+1];
          c[i]=c[i]*c[i+1];
          for(v=i;v<sign;v++)
          {
              sig[v]=sig[v+1];
          }
          for(v=i+1;v<t;v++)
          {
              b[v]=b[v+1];
              c[v]=c[v+1];
          }
          i--;
        sign=sign-1;
        digit=digit-2;
        }
    }
    if(sign<=0)
    {
        if(b[1]==c[1])
        printf("Result=1\n");
        else
        {
        q=gcd(b[1],c[1]);
        printf("Result=%d/%d\n",b[1]/q,c[1]/q);
        }
    }
      else
       {
        p=c[1];
        tem=sign*2;
        for(j=1;j<tem;j++)
        {
        d=gcd(p,c[j+1]);
        gc=(p*c[j+1])/d;
        p=gc;
        }
        for(j=1;j<=tem;j++)
        {
            val=gc/c[j];
            b[j]=val*b[j];
        }
        sum=b[1];
        for(i=1;i<=sign;i++)
        {
            if(sig[i]=='+')
            sum=sum+b[i+1];
            else
            if(sig[i]=='-')
            sum=sum-b[i+1];
        }
        if(sum==gc)
        printf("Result=1\n");
        else
        {
        r=gcd(sum,gc);
        printf("Result=%d/%d\n",sum/r,gc/r);
        }
       }
    }
    return 0;
}
