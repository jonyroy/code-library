#include<stdio.h>
#include<string.h>
#define MAX 1000
long int gcd(long int x,long int y)
{
    long int r;
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
    long int m,n[MAX],i,g,d,a;
    while(scanf("%ld",&m)!=EOF)
    {
        for(i=1;i<=m;i++)
        {
            scanf("%ld",&n[i]);
        }
        a=n[1];
        for(i=1;i<m;i++)
        {
        d=gcd(a,n[i+1]);
        g=(a*n[i+1])/d;
        a=g;
        }
        printf("%ld\n",g);
    }
    return 0;
}
