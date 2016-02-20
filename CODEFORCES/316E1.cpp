#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;

#define pb  push_back
#define pob pop_back
#define mp  make_pair
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define For(i,k,r)  for(int i = k; i <= r; i++)
#define Fill(a,b)   memset(a,b,sizeof(a))
#define OR ||
#define AND &&
#define P printf
#define S scanf
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int main()
{
    long long int n,m,f[105],a[105],sum;
    f[0]=1,f[1]=1;
    for(int i=2;i<=100;i++)
        f[i]=(f[i-1]+f[i-2])%1000000000;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
    {
        int test,b,c;
        cin>>test>>b>>c;
        if(test==1)
        {
            a[b]=c;
        }
        else
        {
            sum=0;
              for(int j=0;j<=c-b;j++)
              {
                  sum=(sum+(f[j]*(a[b+j]%1000000000)))%1000000000;
              }
              cout<<sum<<endl;
        }
    }
    return 0;
}
