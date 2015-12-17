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
struct node
{
    int u;
    int v;
    int cost;
};
bool compear_one(const node f,const node s)
{
    return f.cost<s.cost;
}
int A[1000];
int Find_disjonintset(int a)
{
    if(A[a]==a)
    return a;
   return A[a]= Find_disjonintset(A[a]);
}
vector<node>G;

void kruskal_mst()
{
    int Total_cost=0;
    sort(G.begin(),G.end(),compear_one);
    LPI(i,1000)
    A[i]=i;
    int l=G.size();
  LPI(i,l)
   {
    if(Find_disjonintset(A[G[i].u])!=Find_disjonintset(A[G[i].v]))
     {
        A[G[i].v]= A[G[i].u];
        cout<<G[i].u<<" "<<G[i].v<<" "<<G[i].cost<<endl;
        Total_cost+=G[i].cost;
     }
  }
  cout<<Total_cost<<endl;
}
int main(){
    int u,v,cost;
    LPI(i,1000)
    A[i]=i;
    while(scanf("%d%d%d",&u,&v,&cost)!=EOF)
    {
        node g={u,v,cost};
        G.push_back(g);
    }
    kruskal_mst();

    return 0;
}


