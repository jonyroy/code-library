//Accepteed
#include<set>
#include<map>
#include<ctime>
#include<string>
#include<queue>
#include<cstdio>
#include<cmath>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<cassert>
#include<iostream>
#include<algorithm>
#include <functional>
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
    int n,k,t,b,c,i,a,m[110]={0},j;
    bool test=false;
    scanf("%d%d%d",&n,&k,&t);
    a=((n*k*t)/100);
    c=a/k;
    b=a%k;
    for(i=1;i<=c;i++)
    {
        m[i]=k;
    }
    m[i]=b;
    for(j=i+1;j<=n;j++)
    m[j]=0;
    for(i=1;i<=n;i++)
    {
        if(i<n)
    printf("%d ",m[i]);
    else
    printf("%d",m[i]);
    }
    printf("\n");
    return 0;
}

