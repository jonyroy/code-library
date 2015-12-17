//Accepted
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    int max[205][205],i,j,k,n,sum,error,err,erro,er;
    bool test;
    while(scanf("%d",&n))
    {
    if(n==0)
    break;
    error=0;
    for(i=1;i<=n;i++)
    {
        sum=0;
       for(j=1;j<=n;j++)
       {
           scanf("%d",&max[i][j]);
           sum=sum+max[i][j];
       }
       if(sum%2)
       {
           error++;
           err=i;
       }
    }
    er=0;
    for(i=1;i<=n;i++)
    {
        sum=0;
       for(j=1;j<=n;j++)
       {
           sum=sum+max[j][i];
       }
       if(sum%2)
       {
           er++;
           erro=i;
       }
    }
    if(error==0&&er==0)
    printf("OK\n");
    else if(error==1&&er==1)
    printf("Change bit (%d,%d)\n",err,erro);
    else
    printf("Corrupt\n");
    }
    return 0;
}
