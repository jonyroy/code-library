#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<LL>stns[500],stnf[500];
int Stirling_Number_Second_Kind(LL N)
{
    stns[0].push_back(1);
    for(int i=1;i<=N;i++)
    {
        stns[i].push_back(0);
        stns[i].push_back(1);
        for(int j=2;j<i;j++)
        stns[i].push_back(stns[i-1][j-1]+stns[i-1][j]*j);
        stns[i].push_back(1);
    }
    return 0;
}
int Stirling_Number_First_Kind(LL N)
{
    stnf[0].push_back(1);
    for(int i=1;i<=N;i++)
    {
        stnf[i].push_back(0);
        for(int j=1;j<i;j++)
        stnf[i].push_back(stnf[i-1][j-1]+stnf[i-1][j]*(i-1));
        stnf[i].push_back(1);
    }
    return 0;
}
int main()
{
    Stirling_Number_Second_Kind(50);
    Stirling_Number_First_Kind(50);
    LL n,r;
    while(cin>>n>>r)
    {
        cout<<stns[n][r]<<endl;
        cout<<stnf[n][r]<<endl;
    }
    return 0;
}
