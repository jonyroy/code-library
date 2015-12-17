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
#define MAX 100050
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
int tree[MAX]={0};
int update(long int idx,long M)
{
    while(idx<=M)
    {
        tree[idx]+=1;
        idx+=(idx & -idx);
    }
    return 0;
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
string s;
scanf("%d%*c",&T);
for(int i=1;i<=T;i++)
{
    printf("Case %d:\n",i);
    for(long int j=0;j<MAX;j++)
        tree[j]=0;
    cin>>s;
    long int q,len;
    len=s.size();
    scanf("%ld",&q);
    for(long int j=1;j<=q;j++)
    {
        getchar();
        char ch;
        long int n,m;
        scanf("%c%ld",&ch,&n);
        if(ch=='I')
        {
            scanf("%ld",&m);
            update(n,len);
            update(m+1,len);
        }
        else
        {
            long int sum;
            sum=read(n)+(s[n-1]-48);
            if(sum%2)
                printf("1\n");
            else
                printf("0\n");
        }
    }
}
return 0;
}
