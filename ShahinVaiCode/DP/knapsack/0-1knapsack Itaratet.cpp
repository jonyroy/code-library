//DER.......
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define LPI(i,n) for(int i=0;i<(n);i++)
#define LPI1(i,a,b) for(int i=(a);i<=(b);i++)
#define LPIL(i,x) for(int i=0;x[i];i++)
#define LPD(i,n) for(int i=(n)-1;i>=0;i--)
#define LPD1(i,a,b) for(int i=(a);i>=(b);i--)
#define I(x) scanf("%d",&x)
#define RI(x) int x;I(x)
#define II(x,y) scanf("%d%d",&x,&y)
#define RII(x,y) int x,y;II(x,y)
#define III(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define RIII(x,y,z) int x,y,z;III(x,y,z)
#define RS(x) scanf("%s",x)
#define PI(x) printf("%d\n",x)
#define PIS(x) printf("%d ",x)
#define CASET int ___T,cas=1;scanf("%d ",&___T);while(___T--)
#define CASEN0(n) int cas=1;while(scanf("%d",&n)!=EOF&&n)
#define CASEN(n) int cas=1;while(scanf("%d",&n)!=EOF)
#define MP make_pair
#define PB push_back
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define SEP(x) ((x)?'\n':' ')
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define F first
#define S second
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int dp[100][100],p[100][100];
int V[100],W[100];
void pathprint(int i,int j)
{
    if(i==0)
    return ;
    if(p[i][j]!=j)
    {
        pathprint(i-1,p[i][j]);
        cout<<V[i]<<" ";
    }
    else
    pathprint(i-1,j);
}
int main(){
    int cap;
    RI(t);
    LPI(k,t)
    {

        RI(n);
        LPI(j,n)
        {
            RII(x,y);
            V[j+1]=x;
            W[j+1]=y;
        }
        RI(cap);

        LPI(j,n+1)
        {
            dp[j][0]=0;
        }
        LPI(j,cap+1)
        {
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++)
        for(int j=1;j<=cap;j++)
        {
            if((W[i]<=j)&&(V[i]+dp[i-1][j-W[i]])>dp[i-1][j])
            {
                dp[i][j]=V[i]+dp[i-1][j-W[i]];
                p[i][j]=j-W[i];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
                p[i][j]=j;

            }
        }
        cout<<dp[n][cap]<<endl;
        pathprint(n,cap);
    }

    return 0;
}


