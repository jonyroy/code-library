//Accepted
#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<queue>
#define inf 1600005
#define M 40
#define N 505
#define mp(a,b) make_pair(a,b)
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
    double n,a,b,c,d;
    int T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%lf",&n);
        a=n/1.66666666666666667;
        b=n/5.0;
        c= 3.14159265358979323846264*b*b;
        d=a*n;
        d=d-c;
        printf("%.2lf %.2lf\n",c,d);
        i++;
    }
    return 0;
}
