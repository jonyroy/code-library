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
    int info;
    int l;
    int r;
    int c;
};
vector< node > T;
void genarate_tree(int up)
{
    a=1;
    while(up>=a)
    {
        l=a;
        while(r<=up)
        {
            r=l+a;
            p=(l+r)/2;
            T[p].l=l;
            T[p].r=r;
            T[p].c=T[l].c+T[r].c+T[p].c;
            l=r+a;
        }
        a>>1;
    }
}
void deleted(int r,int p)
{
    T[r].c=T[r].c-1;
    if(T[T[r].l].c>p)
    deleted(T[r].l,p);
    else if((T[T[r].l].c+1)==p&&T[r].info>0)
    {
        printf("%d\n",T[r].info);
        T[r].info=0;
        return ;
    }
    else
    {
        p=p-T[T[r].l].c;
        if(T[r].info>0)
        p=p-1;
        deleted(T[r].r,p);
    }
}
int main(){
    int root,t,i,j,n,q,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&q);
        T.clear();
        node nd={0,0,0,0};
            T.push_back(nd);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            node nd={a,0,0,1};
            T.push_back(nd);
        }
        for(j=1;j<=q;j++)
        {
            node nd={0,0,0,0};
            T.push_back(nd);
        }
        int x=1;
        while(x>>1<=(n+q))
        ;
        root=x/2;
        x=x-1;
        genarate_tree(x);
    }

return 0;
}
