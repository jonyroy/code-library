//Accepted
#include<string.h>
#include<stdio.h>
#define MAX 1000
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
    char a[MAX],b[MAX];
    long long int i,j,n,len,sum,tem;
    while(1)
    {
    scanf("%s",a);
    if(strcmp(a,"0")==0)
    break;
    len=strlen(a);
    rev(a,b);
    sum=0;
    for(i=0;i<len;i++)
    {
        tem=(b[i]-48)*(pow(2,i+1)-1);
        sum=sum+tem;
    }
    printf("%lld\n",sum);
    }
    return 0;
}
