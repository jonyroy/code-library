//Accepted
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
   long  int n,k,a[100050],i,j,count=0,cou=0;
    bool test=false;
    scanf("%ld%ld",&n,&k);
    scanf("%ld",&a[1]);
    for(i=2;i<=n;i++)
    {
        scanf("%ld",&a[i]);
        if(a[i-1]==a[i])
        count++;
    }
    for(i=k;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
        test=true;
        break;
        }
    }
    if(n==1)
    printf("0\n");
    else if(count==n-1)
    printf("0\n");
    else if(test==true)
    printf("-1\n");
    else
    {
        for(i=k-1;i>=1;i--)
        {
            if(a[k]==a[i])
            cou++;
            else
            break;
        }
    printf("%ld\n",k-1-cou);
    }
    return 0;
}
