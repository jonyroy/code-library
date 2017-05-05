#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<queue>
#define inf 1600005
#define M 40
#define N 505
#define mp(a,b) make_pair(a,b)
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
    int inser[1000],i,j,n,key;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>inser[i];
    }
    for(i=2;i<=n;i++)
    {
        key=inser[i];
        j=i-1;
        while(j>0&&inser[j]>key)
        {
            inser[j+1]=inser[j];
            j--;
        }
        inser[j+1]=key;
    }
    for(i=1;i<=n;i++)
    cout<<inser[i]<<" ";
    return 0;
}
