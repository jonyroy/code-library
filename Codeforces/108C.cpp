#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    long long int n,m,ans=1;
    string s[200];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<m;i++)
    {
     int a[200]={0},c=0;
     for(int j=0;j<n;j++)
     {
         a[s[j][i]-64]++;
     }
     for(int k=1;k<=26;k++)
        if(a[k])
        c++;
     ans=(ans*c)%mod;
    }
    cout<<ans;
    return 0;
}
