
#include<bits/stdc++.h>
using namespace std;

#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define inf 1001001001
#define mp make_pair
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
int dp[100][100005];
int wi[100],cost[100],ntime[100],n,cap;
int call(int i,int w)
{
    if(i==n)
    return 0;
    if(dp[i][w]!=-1)
    return dp[i][w];
    int profit1=0;
    for(int j=0;j<=ntime[i];j++)
    {
        if(w+j*wi[i]<=cap)
        profit1=max(profit1,j*cost[i]+call(i+1,w+j*wi[i]));
    }
    dp[i][w]=profit1;
    return dp[i][w];

}

int main(){
    ms1(dp);
int i;
cin>>n;
for(i=0;i<n;i++)
cin>>wi[i];
for(i=0;i<n;i++)
cin>>cost[i];
for(i=0;i<n;i++)
cin>>ntime[i];
cin>>cap;
cout<<call(0,0)<<endl;
return 0;
}
