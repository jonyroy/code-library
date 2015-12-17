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
long int arr[MAX],tree[3*MAX];
int binary_tree(long int node,long int b,long int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return 0;
    }
    long left=node*2;
    long right=node*2+1;
    long int mid=(b+e)/2;
    binary_tree(left,b,mid);
    binary_tree(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
long int query(long int node,long int b,long int e,long int i,long int j)
{
    if(b>j||i>e)
        return MAX;
    if(b>=i&&e<=j)
        return tree[node];
    long int left=node*2;
    long int right=node*2+1;
    long int mid=(b+e)/2;
    long int p1=query(left,b,mid,i,j);
    long int p2=query(right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    long int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        long int n,q;
        scanf("%ld%ld",&n,&q);
        for(long j=1;j<=n;j++)
            scanf("%ld",&arr[j]);
            binary_tree(1,1,n);
            printf("Case %d:\n",i);
            for(long int j=1;j<=q;j++)
            {
                long int I,J;
                scanf("%ld%ld",&I,&J);
                long sum=query(1,1,n,I,J);
                printf("%ld\n",sum);
            }
    }
    return 0;
}
