#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,n,m;
    long A[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&b,&c);
        for(j=0;j<b;j++)
        {
            scanf("%d%d",&r,&p);
            for(k=r;k<=p;k++)
            if(A[k]>0)
            A[k]=A[k]+c-1;
            else
            A[k]=c;
        }
        s=0;
        for(j=0;j<=n;j++)
        s=s+A[j];
    }
return 0;
}
