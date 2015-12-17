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
    map<long long,int>node;
    nCr(40);
    for(int i=0;i<=20;i++)
    {
    long long int m=ncr[2*(long long)i][(long long)i]/(long long)(i+1);
    node[m]=i;
    }
    while(scanf("%lld",&n)!=EOF)
    {
       printf("%d\n",node[n]);
    }
    return 0;
}

