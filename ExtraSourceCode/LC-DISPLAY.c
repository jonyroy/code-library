//Accepted
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int s,i,j,k,l,len,ff;
    long int n;
    char re[100];
    while(scanf("%d%s",&s,re))
    {
        n=atol(re);
        len=strlen(re);
    if(s==0&&n==0)
    break;
     printf(" ");
        for(j=0;j<len;j++)
        {
            if(re[j]=='1'||re[j]=='4')
            for(l=1;l<=s;l++)
            printf(" ");
            else
            for(k=1;k<=s;k++)
            printf("-");
            if(j==len-1)
            printf(" ");
            else
            printf("   ");
        }
        printf("\n");
        for(k=1;k<=s;k++)
        {
        for(j=0;j<len;j++)
        {
            if(re[j]=='1'||re[j]=='2'||re[j]=='3'||re[j]=='7')
            for(l=1;l<=s+1;l++)
            printf(" ");
            else
            {
            printf("|");
            for(l=1;l<=s;l++)
            printf(" ");
            }
            if(re[j]=='5'||re[j]=='6')
            printf(" ");
            else
            printf("|");
            if(j!=len-1)
            printf(" ");
        }
        printf("\n");
        }
        printf(" ");
        for(j=0;j<len;j++)
        {
            if(re[j]=='1'||re[j]=='0'||re[j]=='7')
            for(l=1;l<=s;l++)
            printf(" ");
            else
            for(k=1;k<=s;k++)
            printf("-");
            if(j==len-1)
            printf(" ");
            else
            printf("   ");
        }
        printf("\n");
        for(k=1;k<=s;k++)
        {
        for(j=0;j<len;j++)
        {
            if(re[j]=='2'||re[j]=='6'||re[j]=='8'||re[j]=='0')
            {
            printf("|");
            for(l=1;l<=s;l++)
            printf(" ");
            }
            else
            for(l=1;l<=s+1;l++)
            printf(" ");
            if(re[j]=='2')
            printf(" ");
            else
            printf("|");
            if(j!=len-1)
            printf(" ");
        }
        printf("\n");
        }
        printf(" ");
        for(j=0;j<len;j++)
        {
            if(re[j]=='1'||re[j]=='4'||re[j]=='7')
            for(l=1;l<=s;l++)
            printf(" ");
            else
            for(k=1;k<=s;k++)
            printf("-");
            if(j==len-1)
            printf(" ");
            else
            printf("   ");
        }
      printf("\n");
    printf("\n");
    }
    return 0;
}
