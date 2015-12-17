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
#define max 10000
int Tree[max];
struct node
{
    int x;
    int y;
};
vector<node>points;
bool compear_with_x(const node f,const node s)
{
    return f.x<s.x;
}
bool compear_with_y(const node f,const node s)
{
    return f.y<s.y;
}
int sort_points(int l,int r,int s)
{
    if(s==0)
    {
        sort(points.begin()+l,points.begin()+r,compear_with_x);
      int  mid=(l+r)/2;
        return points[mid].x;

    }
    else
    {
        sort(points.begin()+l,points.begin()+r,compear_with_y);
       int mid=(l+r)/2;
        return points[mid].y;

    }
}
void KD_Tree(int node,int l,int r,int s)
{
    if(l==r)
    {
        if(s==0)
        Tree[node]=points[l].x;
        else
        Tree[node]=points[l].y;
        return;
    }
    Tree[node]=sort_points(l,r,s);
    s=(s+1)%2;
    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    KD_Tree(Left,l,mid,s);
    KD_Tree(Right,mid+1,r,s);
}
int main(){

return 0;
}
