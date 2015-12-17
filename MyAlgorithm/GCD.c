#include<stdio.h>
#include<string.h>
#define MAX 1000
long long int gcd(long long int x,long long int y)
{
    long long int r;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}
int main()
{
    long long int n,i,g[MAX],m,a;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&g[i]);
        }
        a=g[1];
        for(i=1;i<n;i++)
        {
        m=gcd(a,g[i+1]);
        a=m;
        }
        printf("%lld\n",m);
    }
    return 0;
}
