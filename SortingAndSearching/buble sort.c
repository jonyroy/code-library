#include<stdio.h>
#include<string.h>
int main()
{
    int n,m[100],i,tem,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&m[i]);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(m[j]>m[j+1])
            {
                tem=m[j];
                m[j]=m[j+1];
                m[j+1]=tem;
            }
        }
    }
    for(i=n;i>=1;i--)
    printf("%d ",m[i]);
    return 0;
}
