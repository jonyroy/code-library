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
   I n,m,a[105][105];
   cin>>n>>m;
   rep(i,1,n)
   rep(j,1,m)
   cin>>a[i][j];
   while(n%2==0)
   {
     I cnt=0;
     rep(i,1,n/2)
     {
        rep(j,1,m)
        {
           if(a[i][j]!=a[n-i+1][j])
           {
             cnt=1;
             break;
           }
        }
        if(cnt)
        break;
     }
     if(cnt==0)
     n/=2;
     else
     break;
   }
   cout<<n<<endl;
}
