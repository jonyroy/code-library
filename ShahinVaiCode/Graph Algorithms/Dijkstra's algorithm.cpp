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
#define INF 1001001001
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
double aabs (double a) { return a < 0 ? -a : a; }
priority_queue<int,vector<int>,greater<int> > q;//min priority queue
struct node
{
    int v;
    int w;
};
vector<node>g[100005];
int s[100005];
int path[100005];
void Dijkstra(int n)
{
    int i,u,v,w,l;
    s[1]=0;path[1]=0;
    for(i=2;i<=n;i++)
    s[i]=maxn;
    q.push(1);
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        l=g[u].size();
        for(i=0;i<l;i++)
        {
            v=g[u][i].v;
            w=g[u][i].w;
            if(s[v]>s[u]+w)
            {
                s[v]=s[u]+w;
                path[v]=u;
                q.push(v);
            }
        }
    }
}
void path_print(int n)
{
    if(n==0)
    return;
    path_print(path[n]);
    printf("%d ",n);
}
int main()
{
    int n,m,w,i,x,y;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;//x->y, weights w
        node n={y,w};
        g[x].push_back(n);
    }
    Dijkstra(n);
    printf("cost of node n: %d\n",s[n]);
    path_print(n);
    return 0;
}


