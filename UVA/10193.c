//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
int rev(char *a,char *b)
{
    long int i,len,j=0;
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]='\0';
    return 0;
}
long int BiToDeci(char *ch)
{
    long int deci,len,i;
    char a[100];
    len=strlen(ch);
    rev(ch,a);
    deci=0;
    for(i=0;i<len;i++)
    {
        deci=deci+(long)pow((double)2,(double)i)*(a[i]-48);
    }
    return deci;
}
long gcd(long a,long b)
{
    long d;
    while(a%b!=0)
    {
        d=a%b;
        a=b;
        b=d;
    }
    return b;
}
int main()
{
    long int test,i=1,a,b,g;
    char s1[100],s2[100];
    scanf("%ld",&test);
    while(i<=test)
    {
        scanf("%s%s",s1,s2);
        a=BiToDeci(s1);
        b=BiToDeci(s2);
        g=gcd(a,b);
        if(g==1)
        printf("Pair #%ld: Love is not all you need!\n",i);
        else
        printf("Pair #%ld: All you need is love!\n",i);
        i++;
    }
    return 0;
}
