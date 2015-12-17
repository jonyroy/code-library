#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
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
#define FOR(i,k,n)  for(int i = k; i <= n; i++)
#define rep(i,k,n)   for(int i=n;i>=k;i--)
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
long int r,g,b,n,m,p,sum;
    cin>>r>>g>>b;
     if((r==0||g==0||b==0))
        {
           sum=(r/3)+(g/3)+(b/3);
           cout<<sum<<endl;
           return 0;
        }
     sum=(r/3)+(g/3)+(b/3);
     n=r%3;m=g%3;p=b%3;
     if((n==0&&m==2&&p==2)||(n==2&&m==0&&p==2)||(n==2&&m==2&&p==0))
     sum++;
     else
     {
         long int mi=min(min(n,m),p);
         sum=sum+mi;
     }
     cout<<sum<<endl;
   return 0;
}
