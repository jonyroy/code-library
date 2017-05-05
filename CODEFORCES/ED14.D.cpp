/*
* Author: Jony Roy
* Date: 16-07-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define pb(x)          push_back(x)
#define mp(x,y)          make_pair(x,y)
#define ft              first
#define sd              second
#define deb(x) cerr << #x << " = " << x << endl;

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
int a[1000005];
vector<int >G[1000005];
bitset<1000005>visited;
int bfs(int start)
{
    queue<int>q;
    vector<int> x,y;
    x.push_back(start);
    y.push_back(a[start]);
    q.push(start);
    visited[start]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        int len=G[u].size();
        for(int i=0; i<len; i++)
        {
            int v=G[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                q.push(v);
                x.push_back(v);
                y.push_back(a[v]);
            }
        }
    }
    sort(y.begin(),y.end());
    sort(x.begin(),x.end());
    int l=y.size();
    int k=0;
    for(int i=l-1;i>=0;i--)
    {
        a[x[k++]]=y[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<=m; i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        G[u].pb(v);
        G[v].pb(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
            bfs(i);
    }
    for(int i=1;i<=n;i++)
     printf("%d ",a[i]);
     printf("\n");
    return 0;
}

