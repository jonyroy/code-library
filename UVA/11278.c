//Accepted
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define MAX 5000
int main()
{
    char a[MAX]={" !_#QJM-P?F}v[g'/123qjlmfpKkV]G @&IX(^AEHUTDCWNYB$>*OS<%ZR);==L{`7ix96aehutdcwnyb4.8os,5zr0:|+~"};
    char b[MAX],line[MAX];
    long int len,i,j=32,k,l;
    bool test;
    len=strlen(a);
    for(i=0;i<95;i++)
    {
        b[j++]=a[i];
    }
    b[63]=34;
    b[92]=92;
    while(gets(line))
    {
        len=strlen(line);
        for(i=0;i<len;i++)
        {
            printf("%c",b[line[i]]);
        }
        printf("\n");
    }
    return 0;
}
