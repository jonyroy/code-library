#include<bits/stdc++.h>
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
#define rep(i,k,n)  for(int i = k; i <= n; i++)
#define rrep(i,k,n)   for(int i=n;i>=k;i--)
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
int main()
{
    int n,m;
    VI a;
    cin>>n>>m;
    rep(i,1,m)
    {
      int b;
      cin>>b;
      a.pb(b);
    }
    sort(a.begin(),a.end());
    int mm=100000;
    rep(i,0,m-n)
    {
      mm=min(mm,a[i+n-1]-a[i]);
    }
    cout<<mm<<endl;
}
