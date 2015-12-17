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
int dp[100][100];
int main()
{
    int i,n,j,p1,p2;
    cin>>n;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>dp[i][j];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if(j-1>=0)
        {
            p1=dp[i][j-1];
        }
        else
        p1=0;
        if(i-1>=0)
        {
            p1=dp[i-1][j];
        }
        else
        p2=0;
        dp[i][j]=dp[i][j]+max(p1,p2);
    }
    cout<<dp[n-1][n-1]<<endl;
    return 0;
}


