//Accepted
#include<stdio.h>
#include<string.h>
#define MAX 10000
int rev(char *a,char *b);
int multiplication(char *a,char *b,char *m);
int multiplication(char *a,char *b,char *m)
{
    long int len1,len2,i,carry,k,t,j,mul;
    char F[MAX],S[MAX];
    len1=strlen(a);
    len2=strlen(b);
    rev(a,F);
    rev(b,S);
    k=0;
    for(i=0;i<len1+len2;i++)
    {
        m[i]='0';
    }
    for(i=0;i<len1;i++)
    {
        t=k;
        carry=0;
        for(j=0;j<len2;j++)
        {
            mul=(F[i]-'0')*(S[j]-'0')+carry+m[t]-'0';
            m[t]=mul%10+'0';
            carry=mul/10;
            t++;
        }
        if(carry>0)
        {
        m[t]=carry+'0';
        t++;
        }
        k++;
    }
    m[t]='\0';
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
int main()
{
    char a[MAX],b[MAX],m[MAX];
    long int i,l,k;
    while(scanf("%s%s",a,b)!=EOF)
    {
        multiplication(a,b,m);
        l=strlen(m);
        k=l-1;
        while(m[k]>'9'||m[k]<'1')
        {
            k--;
        }
        if(k<0)
        printf("0");
        else
        for(i=k;i>=0;i--)
        {
            printf("%c",m[i]);
        }
         printf("\n");
    }
    return 0;
}
