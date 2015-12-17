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
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
queue<int> q;
vector<int>G[1000];
int n,color[1000],d[1000],path[1000];
void BFS(int s)
{
    int i,v,l,u;
    for(i=0;i<=n;i++)
    {
        color[i]=0;
        d[i]=-1;
        path[i]=0;
    }
    color[s]=1;
    d[s]=0;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        //l=G[u].size();
        for(v=0;v<l;v++)
        if(G[u][v])
        {
            //v=i;//G[u][i];
            if(color[v]==0)
            {
                color[v]=1;//color gray..
                d[v]=d[u]+1;//distance..
                path[v]=u;//u parents of v...
                q.push(v);
            }
        }
        color[u]=2;//color black..
    }
}
void path_print(int v)
{
    if(v<=0)
    return;
    path_print(path[v]);
    printf("%d ",v);
}
int main()
{
    int a,i,x,y,s,e;
    n=1000;
cin>>a;
for(i=0;i<a;i++)
{
    cin>>x>>y;
    G[x].push_back(y);
    G[y].push_back(x);
}
cin>>s>>e;
BFS(s);
cout<<"Distance: "<<d[e]+1<<endl;
path_print(e);
cout<<endl;
return 0;
}
