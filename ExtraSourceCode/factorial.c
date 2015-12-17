#include<stdio.h>
#include<string.h>
#define MAX 200000
int rev(char *a,char *b);
int multiplication(char *a,char *b,char *m);
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
    for(i=0;i<len1+len2;i++)
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
    char a[MAX],m[MAX],c[MAX],dd[MAX];//,store[MAX][MAX];
    int  i,j,f,n,g;
    g=1;
    while(g<=100)
    {
        f=g;
        g++;
    a[0]='1';
    a[1]='\0';
    //scanf("%s",a);
    for(i=1;i<=f;i++)
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
    //printf("%s\n",m);
    }
    int e=strlen(m)-1;
    while(m[e]=='0')
        e--;
    printf("%c ",m[e]);
    //printf("%s\n",m);
    }
    return 0;
}
