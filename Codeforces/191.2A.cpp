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
  int n,m[105]={0};
  cin>>n;
  rep(i,1,n)
  {
     int a;
     cin>>a;
     m[i]=a+m[i-1];
  }
  int mm=-100000;
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      mm=max((j-i+1+2*m[i-1]+m[n]-m[j])-m[j],mm);
    }
  }
  cout<<mm<<endl;
}
