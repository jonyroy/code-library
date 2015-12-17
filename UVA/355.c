#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int base(long long int n,long long int b);
long long int anytodeci(char *any,long long int b);
int rev(char *a,char *b);
long long int i=0;
char converted[100];
int base(long long int n,long long int b)
{
    long long int r,c;
    if(n==0)
    return 0;
    c=n/b;
    r=n-b*c;
    n=c;
    base(n,b);
    if(r>=10&&r<=15)
    converted[i++]=r+55;
    else
    converted[i++]=r+48;
}
int rev(char *a,char *b)
{
    long long int len,k,j=0;
    len=strlen(a);
    for(k=len-1;k>=0;k--)
    {
        b[j++]=a[k];
    }
    b[j]='\0';
    return 0;
}
long long int anytodeci(char *any,long long int b)
{
    long long int k,j,len,n;
    double sum=0,m;
    char ch[5],a[100];
    rev(any,a);
    len=strlen(a);
    for(k=0;k<len;k++)
    {
        if(a[k]>='A'&&a[k]<='F')
        {
            m=(a[k]-55);
            sum=sum+m*pow((double)b,(double)k);
        }
        else
        {
            ch[0]=a[k];
            ch[1]='\0';
            sum=sum+atof(ch)*pow((double)b,(double)k);
        }
    }
    n=(long long int)sum;
    return n;
}
int main()
{
    long long int a,b,c,j,k,len,p;
    char s[100];
    while(scanf("%lld%lld%*c%s",&a,&b,s)!=EOF)
    {
        p=0;
        len=strlen(s);
        if(a<11)
        {
            for(j=0;j<len;j++)
            {
                if(s[j]>'9'||s[j]<'0')
                {
                 p=1;
                 break;
                }
            }
          if(p==0&&(long long)atof(s)==0)
          {
              printf("%s base %lld = 0 base %lld\n",s,a,b);
          }
          if(p==1)
          {
             printf("%s is an illegal base %lld number\n",s,a);
             continue;
          }
        }
        for(j=0;j<len;j++)
        {
            if(s[j]>='A'&&s[j]<='F')
            {
                if(a<=(s[j]-55))
                {
                    p=1;
                    break;
                }
            }
            else
            if(s[j]>='0'&&s[j]<='9')
            {
            if(a<=(s[j]-48))
            {
                p=1;
                break;
            }
            }
            else
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            printf("%s is an illegal base %lld number\n",s,a);
            continue;
        }
        c=anytodeci(s,a);
        base(c,b);
        converted[i]='\0';
        i=0;
        printf("%s base %lld = %s base %lld\n",s,a,converted,b);
    }
    return 0;
}
