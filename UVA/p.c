#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
#include<stdlib.h>
#define MAX 100000
int multiplication(char *a,char *b,char *m);
int add(char *a,char *b,char *c);
int rev(char *a,char *b);
int main()
{
    char a[MAX],b[MAX],s[MAX],d[MAX],c[MAX],si,q[MAX],ch[MAX];
    char first[MAX],second[MAX];
    long int i,j,len,t,sec;
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
            i=0;
            long int m=0;
            while(a[m]<'1')
            {
                i++;
                m++;
                if(m==j-1)
                break;
            }
            if(i==j-1)
            {
            first[0]='0';
            first[1]='\0';
            }
            else
            {
            f=0;
           for(i=i;i<j;i++)
           {
              first[f++]=a[i];
           }
           first[f]='\0';
           f=f-1;
           }
        k=0;
        i=len-1;
        while(s[i]!=32)
        {
         d[k++]=s[i];
         i--;
        }
        long int n=0;
        while(n<len)
        {
            if(s[n]=='+'||s[n]=='*')
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
        i=0;
        while(c[i]<'1')
        {
            i++;
        }
        sec=0;
        for(t=i;t<l;t++)
        second[sec++]=c[t];
        second[sec]='\0';
        sec=sec-1;
        if(f>10&&sec>10)
        {
            printf("%s\n",s);
            printf("first number too big\n");
            printf("second number too big\n");
            printf("result too big\n");
        }
        else if(f>10&&sec<10)
        {
            printf("%s\n",s);
            printf("first number too big\n");
            if((long long)atof(second)!=0)
            printf("result too big\n");
        }
        else if(f<10&&sec>10)
        {
            printf("%s\n",s);
            printf("second number too big\n");
            if((long long)atof(first)!=0)
            printf("result too big\n");
        }
        else if(f<=10&&sec<=10)
        {
            if((long long)atof(first)>2147483647&&(long long)atof(second)>2147483647)
            {
            printf("%s\n",s);
            printf("first number too big\n");
            printf("second number too big\n");
            printf("result too big\n");
            }
            else if((long long)atof(first)>2147483647&&(long long)atof(second)<2147483647)
            {
            printf("%s\n",s);
            printf("first number too big\n");
            if((long long)atof(second)==0)
            {
                if(si=='+')
                printf("result too big\n");
            }
            }
            else if((long long)atof(first)<2147483647&&(long long)atof(second)>2147483647)
            {
            printf("%s\n",s);
            printf("second number too big\n");
            if((long long)atof(first)==0)
            {
                if(si=='+')
                printf("result too big\n");
            }
            }
            else
            {
                if(si=='+')
                {
                add(first,second,q);
                if((long long)atof(q)>2147483647)
                {
                    printf("%s\n",s);
                    printf("result too big\n");
                }
                else
                printf("%s\n",s);
                }
                else
                {
                    multiplication(first,second,q);
                    if(strlen(q)>10)
                    {
                    printf("%s\n",s);
                    printf("result too big\n");
                    }
                    else
                    {
                        if((long long)atof(q)<=2147483647)
                        printf("%s\n",s);
                        else
                        {
                         printf("%s\n",s);
                         printf("result too big\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int multiplication(char *a,char *b,char *m)
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
