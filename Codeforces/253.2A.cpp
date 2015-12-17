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
   string a;
   int b[200]={0};
   getline(cin,a);
   for(int i=0;i<a.size();i++)
   {
     b[a[i]]++;
   }
   int cnt=0;
   for(int i=97;i<=122;i++)
   if(b[i])
   cnt++;
   cout<<cnt;
}
