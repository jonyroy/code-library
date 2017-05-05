#include<bits/stdc++.h>
using namespace std;
long int a, b, c, d, e,f,dp[100005];
long int fn( long int n )
{
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]>=0)
    return dp[n];
    long int m=( fn(n-1)% 10000007 + fn(n-2)% 10000007 + fn(n-3)% 10000007 + fn(n-4)% 10000007 + fn(n-5)% 10000007 + fn(n-6)% 10000007 )% 10000007;
    dp[n]=m;
    return m;
}
int main() {
    long int n, caseno = 0, cases;
    scanf("%ld", &cases);
    while( cases-- )
    {
        memset(dp,-1,sizeof(dp));
        scanf("%ld %ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %ld: %ld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
