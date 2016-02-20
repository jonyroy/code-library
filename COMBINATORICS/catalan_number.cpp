#include<bits/stdc++.h>
using namespace std;
vector<long long int>ncr[105];
int nCr(long long int N)
{
    ncr[0].push_back(1);
    for(int i=1;i<=N;i++)
    {
        ncr[i].push_back(1);
        for(int j=1;j<i;j++)
        ncr[i].push_back(ncr[i-1][j]+ncr[i-1][j-1]);
        ncr[i].push_back(1);
    }
    return 0;
}
int main()
{
    long long int n;
    nCr(40);
    while(cin>>n)
    {
    long long int m=ncr[2*n][n]/(n+1);
    cout<<m;
    }
    return 0;
}
