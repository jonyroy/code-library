/*
 Bell number as a sum of Stirling numbers of the second kind
    B_n= sum[ s{n,K}] where k=0,1...n;
*/
#include<bits/stdc++.h>
using namespace std;
#define MS0(x) memset(x,0,sizeof(x))

long long bell[10000];
#define MAX 1000
#define MaxVal 100007
vector<long> ncr[MAX];
void Genarate_ncr()
{
    int i,j,s;
    ncr[0].push_back(1);
    for(i=1;i<MAX;i++)
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
void bell_orderd()
{
    int n=10,i,j;
    bell[0]=1;
    cout<<bell[0]<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        bell[i]=bell[i]+bell[i-j]*ncr[i][j];
        cout<<bell[i]<<endl;
    }
}
int main()
{
    Genarate_ncr();
    bell_orderd();
    return 0;
}


