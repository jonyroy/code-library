/*
* Author: Jony Roy
* Date: 30-06-2016
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

int mat[101][101], g[101][101], deg[101];

void go(int u, int p, int &ret)
{
    for(int i = 0; i < 2; i++)
    {
        if(g[u][i] != p)
        {
            ret += mat[u][g[u][i]];
            if(g[u][i] != 1)
                go(g[u][i], u, ret);
        }
    }
}
int edge_id[105];
int visited[105];
int m[104][105];
vector<int>adj[105];
int dfs(int start)
{
    int cnt=0;
    stack<int >s;
    s.push(start);
    visited[start]=1;
    int u;
    while(!s.empty())
    {
        u=s.top();
        s.pop();
        int k=-1;
        if(!s.empty())
        {
            k=s.top();
        }
        while(edge_id[u]<2)
        {
            int v=adj[u][edge_id[u]];
            edge_id[u]++;

            if(v!=k)
            {
                //visited[v]=1;
                cnt+=m[u][v];
                s.push(u);
                s.push(v);
                break;
            }
        }
    }
    //cnt+=m[u][1];
    return cnt;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1; i<=tc; i++)
    {
        memset(edge_id,0,sizeof(edge_id));
        memset(visited,0,sizeof(visited));
        int n;
        for(int j=0; j<=100; j++)
            adj[j].clear();
        scanf("%d",&n);
        for(int j=1; j<=n; j++)
        {
            int u,v,cost;
            scanf("%d%d%d",&u,&v,&cost);
            adj[u].pb(v);
            adj[v].pb(u);
            m[v][u]=cost;
            m[u][v]=0;
        }
        int ans=dfs(1);
        edge_id[1]++;
        int ans1=dfs(1);
        printf("Case %d: %d\n",i,min(ans,ans1));
    }

    /*int test, cs, i, j, k, n, u, v, w, ret1, ret2;
    scanf("%d", &test);
    for(cs = 1; cs <= test; cs++)
    {
        scanf("%d", &n);
        memset(deg, 0, sizeof deg);
        for(i = 0; i < n; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            mat[u][v] = 0;
            mat[v][u] = w;
            g[u][deg[u]++] = v;
            g[v][deg[v]++] = u;
        }
        ret1 = ret2 = 0;
        go(1, g[1][0], ret1);
        go(1, g[1][1], ret2);
        printf("Case %d: %d\n", cs, (ret1<ret2 ? ret1 : ret2));
    }*/
    return 0;
}
