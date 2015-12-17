//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int n,m,i,j,count=0;
    char s[50][50]={0},ch;
    for(i=0;i<=15;i++)
    for(j=0;j<=15;j++)
    s[i][j]='0';
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%c",&s[i][j]);
        }
        ch=getchar();
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s[i][j]=='W')
            {
                if(s[i-1][j]=='P')
                {
                    count++;
                    s[i-1][j]=0;
                }
                else if(s[i][j-1]=='P')
                {
                    count++;
                    s[i][j-1]=0;
                }
                else if(s[i][j+1]=='P')
                {
                    count++;
                    s[i][j+1]=0;
                }
                else if(s[i+1][j]=='P')
                {
                    count++;
                    s[i+1][j]=0;
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
