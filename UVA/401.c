#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define MAX 500
int rev(char *a,char *b)
{
    long int i,j,len;
    i=0;
    len=strlen(a);
    while(len)
    {
        b[i++]=a[len-1];
        len--;
    }
    b[i]='\0';
    return 0;
}
int main()
{
    char a[100]={"ABCD3FGHILKJMNOPQR2TUVWXY51SE4Z6789"};
    char b[25],c[25],s[50],d[100]={0};
    bool plin,pong,ping;
    int i,j,len,t=1;
    for(i=65;i<=90;i++)
    {
        d[i]=a[i-65];
    }
    j=26;
    for(i=49;i<=57;i++)
    {
        d[i]=a[j++];
    }
    while(scanf("%s",b)!=EOF)
    {
        plin=false;
        pong=false;
        ping=false;
        rev(b,c);
        if(strcmp(b,c)==0)
        {
            plin=true;
        }
        len=strlen(b);
        for(i=0;i<len;i++)
        {
            s[i]=d[b[i]];
        }
        s[i]='\0';
        rev(s,c);
        if(strcmp(b,c)==0)
        pong=true;
        /*if(strcmp(s,c)==0)
        ping=true;*/
        if(plin&&pong)
        printf("%s -- is a mirrored palindrome.\n\n",b);
        else if(!plin&&!pong)
        printf("%s -- is not a palindrome.\n\n",b);
        else if(plin)
        printf("%s -- is a regular palindrome.\n\n",b);
        else
        printf("%s -- is a mirrored string.\n\n",b);
    }
    return 0;
}
