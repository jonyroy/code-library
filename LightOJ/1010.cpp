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
int fx[10]={-2,-2,-1,1,2,2,1,-1};
int fy[10]={-1,1,2,2,1,-1,-2,-2};
int main()
{
     long int T;
     int  n,m;
     scanf("%ld",&T);
     for(int t=1;t<=T;t++)
     {
         int a[200][200]={0};
         scanf("%d%d",&n,&m);
         int cnt=0;
        for(int i=1;i<=n;i++)
        {
           for(int j=1;j<=m;j++)
           {
               if(a[i][j]==0)
                  {
                    for(int k=0;k<8;k++)
                    {
                       int v,b;
                       v=i+fx[k],b=j+fy[k];
                       if(v>=1&&v<=n&&b>=1&&b<=m&&a[v][b]==0)
                          a[v][b]=1;
                    }
                   }
           }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                if(a[i][j]==0)
                cnt++;
        }
       printf("Case %ld: %d\n",t,cnt);
     }
    return 0;
}
