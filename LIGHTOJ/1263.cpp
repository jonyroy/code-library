/*
* Author: Jony Roy
* Date: 05-07-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define pb(x)           push_back(x)
#define mp(x,y)         make_pair(x,y)
#define ft              first
#define sd              second

using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;
vector<int> G[1005];
int a[1005];
int bfs(int x,int avr)
{
    queue<int> q;
    q.push(x);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            int extra=a[u]-avr;
            if(a[v]<avr)
            {

            }
        }
    }
}
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int sum=0;
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        for(int j=1;j<=m;j++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            G[u].pb(v);
            G[v].pb(u);
        }
        if(sum%n)
            printf("Case %d: Yes\n",i);
        else
        {
            for(int j=1;j<=n;j++)
            {
                if(sum<a[j])
            }
        }
    }
    return 0;
}
