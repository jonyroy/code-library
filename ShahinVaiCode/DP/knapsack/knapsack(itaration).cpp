#include<bits/stdc++.h>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define sz(x) ((int)(x).size())
#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define mp make_pair
#define pb push_back
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
#define inf 1001001001
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
int item,space;
int dp[105][100000],size[105],cost[105];
int call()
{
    int i,j;
    ms1(dp);
    dp[0][0]=0;
    for(i=0;i<item;i++)
    for(j=0;j<=space;j++)
    {
        if(dp[i][j]>dp[i+1][j])
        dp[i+1][j]=dp[i][j];
        if(j+size[i]<=space)
        {
            if(dp[i+1][j+size[i]]<dp[i][j]+cost[i])
            dp[i+1][j+size[i]]=dp[i][j]+cost[i];
        }
    }
    long ans=-10000000;
    for(j=0;j<=space;j++)
    ans=max(ans,dp[item][j]);
    return ans;
}
int main()
{
    cin>>item;
    for(int i=0;i<item;i++)
    cin>>size[i]>>cost[i];
    cin>>space;
    cout<<call()<<endl;
    return 0;
}


