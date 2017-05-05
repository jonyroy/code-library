/*
* Author: Jony Roy
* Date: 05-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000003
typedef long long int llint;
llint bigmod(llint a,llint b)
{
    if(b==0)
    return 1;
    llint x=bigmod(a,b>>1);
    x=((llint)(x*x))%MOD;
    if(b%2)
    x=((llint)(x*a))%MOD;
    return x;
}
int main()
{
    llint nCr[1000005];
    nCr[0]=1;
    nCr[1]=1;
    for(int i=2;i<=1000000;i++)
    {
        nCr[i]=((nCr[i-1]%MOD)*(i%MOD))%MOD;
    }
    int TestCase;
    scanf("%d",&TestCase);
    int tc=1;
    while(TestCase--)
    {
        llint n,r;
        scanf("%lld%lld",&n,&r);
        llint a=((nCr[r]%MOD)*(nCr[n-r]%MOD))%MOD;
        llint b=bigmod(a,MOD-2);
        llint c=((nCr[n]%MOD)*(b%MOD))%MOD;
        printf("Case %d: %lld\n",tc,c);
        tc++;
    }
    return 0;
}
