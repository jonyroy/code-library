/*
* Author: Jony Roy
* Date: 22-06-2016
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

//int fx[]={0,-1,0,1};
//int fy[]={-1,0,1,0};

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
int dist[30005];
vector<int>adj[30005],weight[30005];
int bfs()
{
    int visited[30005]={0};
    queue<int> q;
    q.push(0);
    visited[0]=1;
    dist[0]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                dist[v]=dist[u]+weight[u][v];
                q.push(v);
            }
        }
    }

}
int main(int argc, char *argv[])
{
   int tc;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       int n;
       scanf("%d",&n);
       for(int j=0;j<=n;j++)
       {
           adj[j].clear();
           dist[j]=0;
       }
       for(int j=0;j<n-1;j++)
       {
           int u,v,w;
           scanf("%d%d%d",&u,&v,&w);
           adj[u].push_back(v);
           adj[v].push_back(u);
           weight[u].push_back(w);
           weight[v].push_back(w);
       }
       bfs();
       for(int j=)
   }
   return 0;
}

