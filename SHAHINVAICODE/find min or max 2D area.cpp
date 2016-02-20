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
#define max 502
int arr[max][max];
int tree[max][3*max];
void segtree(int i,int node,int l,int r)
{
    if(l==r)
    {
        tree[i][node]=arr[i][l];
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    segtree(i,Left,l,mid);
    segtree(i,Right,mid+1,r);
    tree[i][node]=(tree[i][Left]>tree[i][Right])?tree[i][Left]:tree[i][Right];
}

long read(int i,int node,int l,int r,int a,int b)
{
    if(l>b||r<a)//over bundory
    return 0;
    if(l>=a&&r<=b)
    return tree[i][node];

    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    int lb=read(i,Left,l,mid,a,b);
    int rb=read(i,Right,mid+1,r,a,b);
   return((lb>rb)?lb:rb);
}

int main(){
    int t;
    scanf("%d",&t);
    LPI(i,t)
    {
        printf("Case %d:\n",i+1);
        MS0(arr);
        MS0(tree);
        RII(n,q);
        LPI(j,n)
        {
            LPI(k,n)
            {
                scanf("%d",&arr[j+1][k+1]);
            }
            segtree(j+1,1,1,n);
        }
        LPI(j,q)
        {
           int max_=0,v;
            RIII(a,b,s);
            for(int k=a;k<a+s;k++)
            {
                v=read(k,1,1,n,b,b+s-1);
                if(v>max_)
                max_=v;
            }
            printf("%d\n",max_);
        }
    }


return 0;
}
