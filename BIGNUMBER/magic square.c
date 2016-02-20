#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int i,n,m,b;
    while(scanf("%d",&n)!=EOF)
    {
    int square[100][100]={0},j=1,k=n/2+1,l=1;
    for(i=1;i<=n*n;i++)
    {
        m=j;
        b=k;
        square[j][k]=l;
        if(j==1)
        j=n;
        else
        j=j-1;
        if(k==n)
        k=1;
        else
        k++;
        if(square[j][k]>0)
        {
          j=m+1;
          k=b;
        }
        l++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%4d",square[i][j]);
        printf("\n\n");
    }
    }
    return 0;
}
