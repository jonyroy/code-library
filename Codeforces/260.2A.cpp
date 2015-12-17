#include<bits/stdc++.h>
#define F first
#define S second
#define MAX 100005
#define EPS  (1E-9)
#define MOD 1000000007
#define sqr(x)  ((x) * (x))
#define pb(x)  push_back(x)
#define pob(x)  pop_back(x)
#define mp(x)  make_pair(x)
#define PI 3.141592653589793
#define Fill(a,b)   memset(a,b,sizeof(a))
#define rep(i,k,n)  for(int i = k; i <= n; ++i)
#define Rep(i,k,n)   for(int i=n;i>=k;--i)
using namespace std;
typedef int  I;
typedef long  L;
typedef float  FL;
typedef double  DD;
typedef long long LL;
typedef vector<int>VI;
typedef pair<int,int> PII;
typedef long double  LD;
typedef vector<long int>VL;
typedef unsigned long long ULL;
bool compare(PII a,PII b)
{
    if(a.S>b.S)
        return true;
    else
        return false;
}
int main()
{
   int n;
   vector<PII>a;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       int c,d;
       cin>>c>>d;
       a.push_back(make_pair(c,d));
   }
   sort(a.begin(),a.end(),compare);
   for(int i=0;i<n-1;i++)
   {
       if(a[i].S>a[i+1].S&&a[i].F<a[i+1].F)
       {
           cout<<"Happy Alex\n";
           return 0;
       }
   }
   cout<<"Poor Alex\n";
   return 0;
}
