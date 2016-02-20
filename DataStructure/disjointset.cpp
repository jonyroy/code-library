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
long int parent[30005],counter[30005];
long int findparent(int n)
{
    if(parent[n]==n)
        return n;
    else
        return parent[n]=findparent(parent[n]);
}
int makeunion(long int a,long int b)
{
    a=findparent(a);
    b=findparent(b);
    if(a!=b)
        parent[a]=b;
    return 0;
}
int main()
{
    long int n,c,d,m,test;
    cin>>test;
    while(test--)
        {
           cin>>n>>m;
           for(int i=1;i<=n;i++)
            {
             parent[i]=i;
             counter[i]=0;
            }
          for(long int i=1;i<=m;i++)
           {
           long int a,b;
           cin>>a>>b;
           makeunion(a,b);
          }
          for(int i=1;i<=n;i++)
          counter[findparent(i)]++;
          long int m=1;
          for(int i=1;i<=n;i++)
          m=max(m,counter[i]);
          cout<<m<<endl;
        }
    return 0;
}
