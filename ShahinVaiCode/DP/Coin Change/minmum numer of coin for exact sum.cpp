#include<bits/stdc++.h>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
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
void Get(int &T)
{
	char C;bool F=0;
	for(;C=getchar(),C<'0'||C>'9';)if(C=='-')F=1;
	for(T=C-'0';C=getchar(),C>='0'&&C<='9';T=T*10+C-'0');
	F&&(T=-T);
}
long dp[100005];
int prev[100005],item[100005];
int main()
{
    int i,j,n;
    int c[]={1,3,5,8,10,13,15};

    for(i=1;i<100000;i++)
    {
        dp[i]=inf;
        for(j=0;j<7&&c[j]<=i;j++)
        if(dp[i-c[j]]+1<dp[i])
        {
            dp[i]=dp[i-c[j]]+1;
            prev[i]=i-c[j];
            item[i]=c[j];
        }
    }
    cin>>n;
    cout<<dp[n]<<endl;
    while(dp[n]>0)
    {
        cout<<item[n]<<" ";
        n=prev[n];
    }
    return 0;
}


