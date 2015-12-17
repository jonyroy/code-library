#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<LL>bn[105];
int Bell_Number(LL N)
{
    bn[0].push_back(1);
    bn[1].push_back(1);
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        bn[i].push_back(bn[i-1][j-1]+bn[i][j-1]);
        bn[i+1].push_back(bn[i][i]);
    }
    return 0;
}
int main()
{
    int n;
    Bell_Number(18);
    while(cin>>n)
    cout<<bn[n][0]<<endl;
    return 0;
}
