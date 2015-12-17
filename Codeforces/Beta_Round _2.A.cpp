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
    int n;
    map<string,int>a,b;
    cin>>n;
    string s[1005];
    int integer[1005];
    for(int i=0;i<n;i++)
    {
       cin>>s[i]>>integer[i];
       a[s[i]]+=integer[i];
    }
    int cnt=-10005555;
    for(int i=0;i<n;i++)
    {
        cnt=max(cnt,a[s[i]]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[s[i]]<cnt||(b[s[i]]+=integer[i])<cnt)
            ;
        else
        {
            cout<<s[i];
            return 0;
        }
    }
    return 0;
}
