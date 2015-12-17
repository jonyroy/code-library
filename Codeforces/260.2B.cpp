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
int main()
{
   string s;
   cin>>s;
   ULL len=s.size();
   int b;
   if(len==1)
   {
       int m=s[0]-48;
       if(m%4==0)
        cout<<"4\n";
        else
        cout<<"0\n";
   }
   else{
   b=s[len-1]-48;
   b=b+(s[len-2]-48)*10;
   if(s[len-1]==0&&s[len-2]==0)
    cout<<"4\n";
   else if(b%4==0)
    cout<<"4\n";
   else
    cout<<"0\n";
   }
   return 0;
}
