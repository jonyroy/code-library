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
    char a[10];
    int n,i,count=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        if(a[1]=='+')
        count++;
        else
        count--;
    }
    printf("%d\n",count);
    return 0;
}

