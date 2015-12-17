#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
#define MAX 10000
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
int copystring(char *store,char *original)
{
    while(*store++=*original++);
    return 0;
}
int mul_int(char *a,long int b,char *c)
{
    char d[MAX],e[MAX];
    long int length,i,carry,tem;
    length=strlen(a);
    rev(a,d);
    carry=0;
    for(i=0;i<length;i++)
    {
        tem=(d[i]-48)*b+carry;
        e[i]=tem%10+48;
        carry=tem/10;
    }
        while(carry>0)
        {
        e[i]=carry%10+48;
        carry=carry/10;
        i++;
        }
    e[i]='\0';
    rev(e,c);
    return 0;
}
int main()
{
    char a[MAX],b[MAX];
    long int n;
    while(scanf("%s%ld",a,&n)!=EOF)
    {
        mul_int(a,n,b);
        printf("%s\n",b);
    }
    return 0;
}
