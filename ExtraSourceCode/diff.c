#include<stdio.h>
int main()
{
    long long int n,di,i,m,r,s,q;
    while(scanf("%lld%lld",&n,&di)!=EOF)
    {
        if(di%2==0)
        m=di/2;
        else
        m=(di+1)/2;
        r=n%di;
        q=n/di;
        if(r>=m)
        q=q+1;
        s=di*q;
        if(s==0)
        s=1;
        printf("%lld\n",s);
    }
    return 0;
}
