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
int rev[1000],cut[1000],p[1000]={0,1,3,4,5,13,17,18,22,25,30};
int cut_rod(int n)
{
   if(rev[n]>0)
   return rev[n];
   if(n==0)
   return 0;
   int q=-10000;
   for(int i=1;i<=n;i++)
   {
      int m=cut_rod(n-i);
      if(q<p[i]+m)
      {
        q=p[i]+m;
        cut[n]=i;
      }
   }
   rev[n]=q;
   return q;
}
int print_cut(int n)
{
  while(n>0)
  {
    printf("%d ",cut[n]);
    n=n-cut[n];
  }
}
int main()
{
   int n;
   cin>>n;
   int m=cut_rod(n);
   printf("%d\n",m);
   print_cut(n);
}
