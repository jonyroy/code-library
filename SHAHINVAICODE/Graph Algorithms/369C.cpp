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
vector<int>G[100005];
int n,color[100005],prl[100005],time_,prtime=0,prn=0;
vector<int>s;
//set<int> s;
void DFS_Visit(int u,int c)
{
   // cout<<u<<endl;
    int i,v,l,stt;
    time_++;
    color[u]=1;
    l=G[u].size();
    for(i=0;i<l;i++)
    {
        v=G[u][i];
        if(color[v]==0)
        {
            stt=0;
            if(prl[v]==1)
            {
                stt=1;
                if(c>=prtime)
                {prtime=c+1;
                prn=v;
                }
                else
                {
                    s.push_back(prn);
                    prtime=c+1;
                    prn=v;
                }
            }
            //cout<<v<<endl;
            DFS_Visit(v,c+stt);

        }
    }

}
void DFS()
{
    int i;
    for(i=0;i<=100003;i++)
    {
        color[i]=0;
    }
    time_=0;
    DFS_Visit(1,0);
    //cout<<prn<<endl;
    i=s.size();
    if(i==0&&prn>0)
    s.push_back(prn);
    else if(prn>0&&s[i-1]!=prn)
    s.push_back(prn);
}

int main(){
    int a,i,x,y,t;
    MS0(prl);

cin>>a;
n=a;
for(i=1;i<a;i++)
{
    cin>>x>>y>>t;
    G[x].push_back(y);
    G[y].push_back(x);
    if(t==2)
    {prl[y]=1;
    prl[x]=1;
    }
}
DFS();
a=s.size();
{cout<<a<<endl;
for(i=0;i<a;i++)
cout<<s[i]<<" ";
}
return 0;
}
