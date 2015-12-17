#include<stdio.h>
#include<string.h>
#define MAX 1000
int rev(char *a,char *b);
int multiplication(char *a,char *b,char *m);
int multiplication(char *a,char *b,char *m)
{
    long int len1,len2,i,carry,k,t,j,mul;
    char F[MAX],S[MAX],tem[MAX]={};
    len1=strlen(a);
    len2=strlen(b);
    rev(a,F);
    rev(b,S);
    for(i=0;i<503;i++)
    {
        if(tem[i]=='\0')
        tem[i]='0';
    }
    for(i=0;i<len2;i++)
    {
        carry=0;
        for(j=0;j<len1;j++)
        {
            mul=(F[j]-'0')*(S[i]-'0')+carry+tem[i+j]-'0';
            tem[i+j]=mul%10+'0';
            carry=mul/10;
        }
        t=i+j;
        while(carry!=0)
        {
        tem[t]=carry%10+'0';
        carry=carry/10;
        t++;
        }
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
int main()
{
    char a[MAX],b[MAX],m[MAX],n[MAX];
    long int i,l;
    while(scanf("%s%s",a,b)!=EOF)
    {
        multiplication(a,b,m);
        printf("%s\n",m);
    }
    return 0;
}
