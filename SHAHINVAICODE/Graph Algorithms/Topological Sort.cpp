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
int count_[100],prev[100],next[100];
bool status[100];
vector<int>G[100];

void topologisort(int start)
{
    if(start==0)
    return;
    cout<<start<<" ";

    if(!G[start].empty())
    {
        int v=G[start].back();
        G[start].pop_back();
        count_[v]-=1;
           int p=prev[v];
           int n=next[v];
            while(count_[v]<count_[p])
            {
                prev[v]=prev[p];
                prev[p]=next[p];
                next[p]=next[v];
                next[v]=p;
                p=prev[v];
                n=next[v];
            }
    }
    topologisort(next[start]);
}
int main(){
    MS0(count_);
    MS0(prev);
    MS0(next);
    MS0(status);
    int u,v;
    while(scanf("%d%d",&u,&v)!=EOF)
    {
        G[u].push_back(v);
            count_[v]+=1;
            status[u]=1;status[v]=1;
    }
    vector<PII>pv;
    LPI(i,100)
    if(status[i]==1)
    {
        pv.push_back(MP(count_[i],i));
    }
    sort(pv.begin(),pv.end());
   int l=pv.size();
   int start=pv[0].S;
   int s;
    next[start]=pv[1].S;
    LPI(i,l-2)
    {
        s=pv[i+1].S;
        prev[s]=pv[i].S;
        next[s]=pv[i+2].S;
    }
    s=pv[l-1].S;
    prev[s]=pv[l-2].S;
    topologisort(start);
    return 0;
}


