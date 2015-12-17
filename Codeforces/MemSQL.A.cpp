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
     int n;
     string s,st[20]={"jolteon","flareon","umbreon","leafeon","glaceon","sylveon"};
     cin>>n>>s;
     if(n==6)
     cout<<"espeon";
     else if(n==8)
     cout<<"vaporeon";
     else
     {
            for(int i=0;i<=5;i++)
            {
               int cn=0,cnt=0;
               for(int j=0;j<=5;j++)
               {
                   if(s[j]!='.')
                   cn++;
                   if(s[j]!='.'&&s[j]==st[i][j])
                   cnt++;
               }
               if(cn==cnt){
               cout<<st[i];
               break;
               }
            }
     }
}
