#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n=2;
    for(long int i=3;i<=20;i++)
    {
        long int m=__gcd(n,i);
        n=(n*i)/m;
    }
    cout<<n;
    return 0;
}
