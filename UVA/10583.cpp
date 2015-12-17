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
long int parent[50005],counter[50005];
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
    long int n,c,d,m,test,j=1;

    while(1)
        {
               cin>>n>>m;
               if(n==0&&m==0)
                break;
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
       long int m=0;
       for(int i=1;i<=n;i++)
        {
            if(parent[i]==i)
                m++;
        }
       cout<<"Case "<<j<<": "<<m<<endl;
       j++;
        }
    return 0;
}

