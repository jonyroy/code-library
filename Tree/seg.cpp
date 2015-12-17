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
int arr[1000],tree[3000];
void bitree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=b;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    bitree(left,b,mid);
    bitree(right,mid+1,e);
    if(a[tree[left]]>=a[tree[right]])
        tree[node]=tree[left];
    else
        tree[node]=tree[right];
    //tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
int update(int node,int b,int e,int i,int value)
{
    if(b>i||e<i)
        return 0;
    if(b>=i&&e<=i)
    {
        arr[i]=value;
        tree[node]=i;
        return 0;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    if(a[tree[left]]>=a[tree[right]])
        tree[node]=tree[left];
    else
        tree[node]=tree[right];
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    bitree(1,1,n);
    cout<<"Enter 1 For Update"<<endl;
    cout<<"Enter 2 For Range"<<endl;
    int m;
    while(cin>>m)
    {
        if(m>2)
        {
            cout<<"You Have Entered Wrong Key.\n";
            return 0;
        }
        int a,b;
        cin>>a>>b;
        if(m==1)
        update(1,1,n,a,b);
        else
        {
            int v=query(1,1,n,a,b);
            cout<<v<<endl;
        }
    }
    return 0;
}

