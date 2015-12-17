#include<bits/stdc++.h>
using namespace std;
vector<long long> ncr[50];
void Genarate_ncr()
{
    int i,j,s;
    ncr[0].push_back(1);
    for(i=1;i<=30;i++)
    {
        ncr[i].push_back(1);
        for(j=1;j<i;j++)
        {
            s=ncr[i-1][j]+ncr[i-1][j-1];
            ncr[i].push_back(s);
        }
        ncr[i].push_back(1);
    }
}
int main()
{
    int n,m,t;
    Genarate_ncr();
    long long int ans=0;
    cin>>n>>m>>t;
    for(int i=4;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i+j==t)
            {
                ans+=(ncr[n][i]*ncr[m][j]);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
