#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long llg;
typedef long lg;
typedef pair<int,int> pr;
int main()
{
    int n,k,s[100005];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    if(n<=k)
    {
        cout<<s[n]<<endl;
        return 0;
    }
    int cnt=n-k+1,ma=-1;
    for(int i=n-k;i>=1;i--)
    {
        s[cnt]+=s[i];
        ma=max(ma,s[cnt]);
        cnt++;
    }
    for(int i=n-k;i<=n;i++)
    {
        ma=max(ma,s[i]);
    }
    cout<<ma<<endl;
    return 0;
}
