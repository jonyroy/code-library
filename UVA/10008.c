#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<ctype.h>
int main()
{

    char str[1000];
    long int i,j,len,T,store[200]={0},max,k;
    scanf("%ld%*c",&T);
    while(T--)
    {
        gets(str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            store[toupper(str[i])]++;
        }
    }
    for(i=65;i<=90;i++)
    {
        max=0;
        k=65;
        for(j=65;j<=90;j++)
        {
        if(store[j]>max)
        {
        max=store[j];
        k=j;
        }
        }
        if(max>0)
        {
        printf("%c %ld\n",k,max);
        store[k]=0;
        }
    }
    return 0;
}
