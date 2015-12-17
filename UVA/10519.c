//Accepted
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define MAX 100000
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
int sub(char *large,char *small,char *res)
{
    int len1,len2,i,sub,carry=0;
    char L[MAX],S[MAX]={},result[200];
    len1=strlen(large);
    len2=strlen(small);
    rev(large,L);
    rev(small,S);
    for(i=0;i<len1;i++)
    {
     if(L[i]<S[i])
     {
         L[i]=L[i]+10;
         if(S[i+1]=='\0')
         S[i+1]=S[i+1]+49;
         else
         S[i+1]=S[i+1]+1;
     }
     if(S[i]=='\0')
     S[i]='0';
     sub=(L[i]-48)-(S[i]-48)+carry;
     result[i]=sub%10+48;
     carry=sub/10;
    }
    i--;
    while(result[i]<'1')
    {
        i--;
    }
    result[i+1]='\0';
    rev(result,res);
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
int multiply(char *a,char *b,char *m)
{
    int len1,len2,i,carry,k,t,j,mul;
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
int main()
{
    char n[MAX],m[5]={"1"},o[MAX],p[MAX];
    int i,j,k,len;
    while(scanf("%s",n)!=EOF)
    {
        if((long long int)atof(n)==0)
        {
            printf("1\n");
            continue;
        }
        sub(n,m,o);
        multiply(o,o,p);
        add(p,o,p);
        add(p,"2",p);
        printf("%s\n",p);
    }
    return 0;
}
/*************************************************************/
/*int main()
{
    char n[MAX],m[5]={"2"},o[MAX],p[MAX];
    int i,j,k,len;
    while(scanf("%s",n)!=EOF)
    {
        if((long long int)atof(n)==0)
        {
            printf("1\n");
            continue;
        }
        multiply(n,n,p);
        sub(p,n,o);
        add(m,o,p);
        printf("%s\n",p);
    }
    return 0;
}
*/
