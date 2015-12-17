#include<stdio.h>
#include<string.h>
int main()
{
    int s,i,j,k,l,t,u,len,m[15],re[15];
    long int n,b;
    while(scanf("%d%ld",&s,&n))
    {
    if(s==0&&n==0)
    break;
    i=1;
    while(n!=0)
    {
        m[i++]=n%10;
        n/=10;
    }
    len=i-1;
    j=1;
    for(i=len;i>=1;i--)
    re[j++]=m[i];
     printf(" ");
        for(j=1;j<=len;j++)
        {
            if(re[j]==1||re[j]==4)
            for(l=1;l<=s;l++)
            printf(" ");
            else//if(re[j]==2||re[j]==3||re[j]==5||re[j]==6||re[j]==7||re[j]==8||re[j]==9||re[j]==0)
            for(k=1;k<=s;k++)
            printf("-");
            printf("   ");
        }
        printf("\n");
        for(k=1;k<=s;k++)
        {
        for(j=1;j<=len;j++)
        {
            if(re[j]==4||re[j]==5||re[j]==6||re[j]==8||re[j]==9||re[j]==0)
            {
            printf("|");
            for(l=1;l<=s;l++)
            printf(" ");
            }
            else
            for(l=1;l<=s+1;l++)
            printf(" ");
            if(re[j]==1||re[j]==2||re[j]==3||re[j]==4||re[j]==7||re[j]==8||re[j]==9||re[j]==0)
            printf("|");
            else
            printf(" ");
            printf(" ");
        }
        printf("\n");
        }
      printf(" ");
        for(j=1;j<=len;j++)
        {
            if(re[j]==1||re[j]==0||re[j]==7)
            for(l=1;l<=s;l++)
            printf(" ");
            if(re[j]==0||re[j]==2||re[j]==3||re[j]==4||re[j]==5||re[j]==6||re[j]==8||re[j]==9)
            for(k=1;k<=s;k++)
            printf("-");
            printf("   ");
        }
        printf("\n");
       for(k=1;k<=s;k++)
        {
        for(j=1;j<=len;j++)
        {
            if(re[j]==0||re[j]==2||re[j]==6||re[j]==8||re[j]==0)
            {
            printf("|");
            for(l=1;l<=s;l++)
            printf(" ");
            }
            else
            for(l=1;l<=s+1;l++)
            printf(" ");
            if(re[j]==1||re[j]==5||re[j]==6||re[j]==3||re[j]==4||re[j]==7||re[j]==8||re[j]==9||re[j]==0)
            printf("|");
            else
            printf(" ");
            printf(" ");
        }
        printf("\n");
        }
       printf(" ");
        for(j=1;j<=len;j++)
        {
            if(re[j]==1||re[j]==4||re[j]==7)
            for(l=1;l<=s;l++)
            printf(" ");
            if(re[j]==2||re[j]==3||re[j]==5||re[j]==6||re[j]==8||re[j]==9||re[j]==0)
            for(k=1;k<=s;k++)
            printf("-");
            printf("   ");
        }
printf("\n");
    }
    return 0;
}
