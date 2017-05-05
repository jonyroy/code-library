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
#define MAX 100500
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
long int tree[MAX]={0};
void update(long int idx,long int val)
{
    while(idx<=MAX)
    {
        tree[idx]+=val;
        idx+=(idx & -idx);
    }
}
void update2(long int idx,long int val)
{
    while(idx<=MAX)
    {
        tree[idx]-=val;
        idx+=(idx & -idx);
    }
}
long int read(long int idx)
{
    long int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx & -idx);
    }
    return sum;
}
int main()
{
 int T;
 long int n,q;
 scanf("%d",&T);
 for(int i=1;i<=T;i++)
 {

     for(long int j=0;j<MAX;j++)
        tree[j]=0;
     scanf("%ld%ld",&n,&q);
     for(long int j=1;j<=n;j++)
        {
            long int m;
        scanf("%ld",&m);
        update(j,m);
        }
         printf("Case %d:\n",i);
        for(long int j=1;j<=q;j++)
        {
            long int b,c;
            int a;
            scanf("%d%ld",&a,&b);
           if(a==1)
             {
               long int s=read(b);
               long int sum=read(b+1);
               printf("%ld\n",sum-s);
               update2(b+1,sum-s);
             }
            else if(a==2)
            {
                scanf("%ld",&c);
                update(b+1,c);
            }
            else
            {
                    scanf("%ld",&c);
                    long int s=read(b);
                    long int sum=read(c+1);
                    printf("%ld\n",sum-s);
            }
        }
 }
return 0;
}
