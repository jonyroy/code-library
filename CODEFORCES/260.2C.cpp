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
typedef pair<int,long int> PII;
typedef long double  LD;
typedef vector<long int>VL;
typedef unsigned long long ULL;
long long int m[MAX];
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       int b;
       cin>>b;
       m[b]++;
   }
   for(int i=1;i<MAX;i++)
   {
       m[i]=(long long)i*m[i];
   }
   if(m[1]>m[2])
    m[2]=m[1];
   for(int i=3;i<MAX;i++)
   {
       m[i]=m[i]+m[i-2];
       if(m[i-1]>m[i])
        m[i]=m[i-1];
   }
   cout<<m[MAX-3];
   return 0;
}
