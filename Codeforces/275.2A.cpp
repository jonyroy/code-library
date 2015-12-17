#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,m;
    cin>>n>>m;
    for(unsigned long long int i=n;i<=m;i++)
        {
            for(unsigned long long int j=i+1;j<=m;j++)
            for(unsigned long long int k=j+1;k<=m;k++)
            {
                if(__gcd(i,j)==1&&__gcd(j,k)==1&&__gcd(i,k)>1)
                {
                   cout<<i<<" "<<j<<" "<<k<<endl;
                   return 0;
                }
            }
        }
    cout<<"-1";
    return 0;
}
