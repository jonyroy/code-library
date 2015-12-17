//Accepted
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#define MAX 100000
char v[MAX],p[MAX],r[MAX];
int main()
{
    long int i,j,k,len;
    char s[]="DONE";
    while(gets(v))
    {
        if(strcmp(v,s)==0)
        break;
        len=strlen(v);
        j=0;
        for(i=0;i<len;i++)
        {
            if(isalpha(v[i]))
            r[j++]=tolower(v[i]);
        }
        r[j]='\0';
        k=0;
        for(i=j-1;i>=0;i--)
        {
            p[k++]=r[i];
        }
        p[k]='\0';
        if(strcmp(r,p)==0)
        printf("You won't be eaten!\n");
        else
        printf("Uh oh..\n");
    }
    return 0;
}
