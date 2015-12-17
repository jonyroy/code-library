#include<stdio.h>
int main()
{
    long int a,i=1,n[100],T,j,tem;
    scanf("%ld",&T);
    while(i<=T)
    {
        scanf("%ld",&a);
        for(j=1;j<=a;j++)
        {
            scanf("%ld",&n[j]);
        }
        for(j=1;j<a;j++)
        {
            if(n[j]>n[j+1])
            {
                tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
        printf("Case %ld: %ld\n",i,n[a]);
        i++;
    }
    return 0;
}
