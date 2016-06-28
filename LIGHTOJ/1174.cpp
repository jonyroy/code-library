/*
* Author: Jony Roy
* Date: 27-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
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

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}

vector<int>adj[105];
int visited[105];
int edge_id[105];
int bfs(int source,int dist[])
{
    for(int i=0;i<=100;i++)
    {
        visited[i]=0;
        dist[i]=0;
    }
    queue<int >Q;
    Q.push(source);
    visited[source]=1;
    dist[source]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int j=0;j<adj[u].size();j++)
        {
            int v=adj[u][j];
            if(visited[v]==0)
            {
                visited[v]=1;
                dist[v]=dist[u]+1;
                Q.push(v);
            }
        }
    }
}


int main(int argc, char *argv[])
{

   int tc,n,r;
   int d1[105],d2[105];
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       for(int j=0;j<=100;j++)
        adj[j].clear();
       scanf("%d%d",&n,&r);
       for(int j=1;j<=r;j++)
       {
           int u,v;
           scanf("%d%d",&u,&v);
           adj[u+1].push_back(v+1);
           adj[v+1].push_back(u+1);
       }
       int u,v,ans=0;
       scanf("%d%d",&u,&v);
       bfs(u+1,d1);
       bfs(v+1,d2);
       for(int j=1;j<=n;j++)
        ans=max(ans,d1[j]+d2[j]);
       printf("Case %d: %d\n",i,ans);
   }
   return 0;
}

