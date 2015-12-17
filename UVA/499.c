//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 10000
char store[MAX],g[MAX];
int main()
{
    long int i,j,k,len,max;
    while(gets(g))
    {
        max=-1;
        long v[200]={0};
        len=strlen(g);
        for(i=0;i<len;i++)
        if(isalpha(g[i]))
        v[g[i]]++;
        for(i=65;i<=122;i++)
        {
        if(max<v[i])
        max=v[i];
        }
        for(i=65;i<=122;i++)
        {
        if(max==v[i])
        printf("%c",i);
        }
        printf(" %ld\n",max);
    }
    return 0;
}
