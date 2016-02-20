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
int main ()
{
 LL x,y,m;
 LL count=0;
 cin>>x>>y>>m;
 if(x>=m||y>=m)
 {
     cout<<"0\n";
     return 0;
 }
  if((x<=0&&y<=0))
  {
      cout<<"-1\n";
      return 0;
  }
  if(x>y)
    swap(x,y);
  if(x<0)
  {
      count=(-x)/y;
      x=x+count*y;
  }
 while(x<m&&y<m)
 {
        LL n=x+y;
        x=n;
        if(x>y)
            swap(x,y);
        count++;
 }
 cout<<count<<endl;
  return 0;
}
