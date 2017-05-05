#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
using namespace std;
#define F first
#define S second
#define MAX 1000500
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define pb(x)  push_back(x)
#define pob(x)  pop_back(x)
#define mp(x)  make_pair(x)
#define PI 3.141592653589793
#define Fill(a,b)   memset(a,b,sizeof(a))
#define FOR(i,k,n)  for(int i = k; i <= n; i++)
#define rep(i,k,n)   for(int i=n;i>=k;i--)
typedef int  I;
typedef long  L;
typedef float  FL;
typedef double  D;
typedef long long LL;
typedef vector<int>VI;
typedef pair<int,int> PII;
typedef long double  LD;
typedef vector<long int>VL;
typedef unsigned long long ULL;
#define mx 100100
long arr[mx];
long tree[3*mx];
long lazy[3*mx];
void init(long node,long b,long e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    long Left=node*2;
    long Right=node*2+1;
    long mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=tree[Left]+tree[Right];
}
long int query(long node,long b,long e,long i,long j,long add)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node]+(e-b+1)*add;
    long Left=node*2;
    long Right=node*2+1;
    long mid=(b+e)/2;
   long p1=query(Left,b,mid,i,j,lazy[Left]+add);
   long p2=query(Right,mid+1,e,i,j,lazy[Right]+add);
    return p1+p2;
}
void update(long node,long b,long e,long i,long j,long newvalue)
{
    if (b>j||e<i)
        return;
    if (b >= i && e <= j)
    {
        lazy[node]+=newvalue;
        return;
    }
    tree[node]+=(newvalue*(min(e,j)-max(i,b)+1));
    long Left=node*2;
    long Right=node*2+1;
    long mid=(b+e)/2;
    update(Left,b,mid,i,j,newvalue);
    update(Right,mid+1,e,i,j,newvalue);
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
        {
            long n,q;
            memset(lazy,0,sizeof(lazy));
            memset(tree,0,sizeof(tree));
            scanf("%ld%ld",&n,&q);
                printf("Case %d:\n",i);
                for(int l=1;l<=q;l++){
            int test;
            scanf("%d",&test);
            if(test==0)
            {
                long x,y,v;
                scanf("%ld%ld%ld",&x,&y,&v);
                update(1,1,n,x+1,y+1,v);
            }
            else
            {
                long x,y;
                scanf("%ld%ld",&x,&y);
                long sum=query(1,1,n,x+1,y+1,lazy[1]);
                printf("%ld\n",sum);
            }
                }
        }
    return 0;
}
