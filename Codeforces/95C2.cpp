#include<bits/stdc++.h>
using namespace std;
vector<long long>a[100];
int nCr()
{
    a[0].push_back(1);
    for(int i=1;i<=30;i++)
    {
        a[i].push_back(1);
        for(int j=1;j<i;j++)
        {
           a[i].push_back(a[i-1][j-1]+a[i-1][j]);
        }
         a[i].push_back(1);
    }
    return 0;
}
int main()
{
    long long int n,m,t,cnt=4,ou=0;
    nCr();
    cin>>n>>m>>t;
    for(int i=1;i<=max(n,m);i++)
    {
        int b=t-cnt;
        if(b<=m&&b>=1&&cnt<=n)
        {
            ou=ou+a[n][cnt]*a[m][b];
        }
         cnt++;
    }
    cout<<ou<<endl;
    return 0;
}
