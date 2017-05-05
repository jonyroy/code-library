/*
* Author: Jony Roy
* Date: 26-06-2016
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
int visited[1005],dist[1005];
int edge_id[1005];
vector<int>adj[1005];
int depthFirstSearch(int source)
{
    for(int i=0;i<=1000;i++)
    visited[i]=0,edge_id[i]=0;
    stack<int> S;
    S.push(source);
    visited[source]=1;
    dist[source]++;
    while(!S.empty())
    {
        int u=S.top();
        S.pop();
        while(edge_id[u]<adj[u].size())
        {

            int v=adj[u][edge_id[u]];
            edge_id[u]++;
            if(visited[v]==0)
            {
                visited[v]=1;
                dist[v]++;
                S.push(u);
                S.push(v);
                break;
            }
        }
    }
}

int main(int argc, char *argv[])
{

   int tc,k,n,m;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       for(int j=0;j<=1000;j++)
       {
           adj[j].clear();
           dist[j]=0;
       }
       int a[105];
       scanf("%d%d%d",&k,&n,&m);
       for(int j=1;j<=k;j++)
        scanf("%d",&a[j]);
       for(int j=1;j<=m;j++)
       {
           int u,v;
           scanf("%d%d",&u,&v);
           adj[u].push_back(v);
       }
       for(int j=1;j<=k;j++)
        {
           depthFirstSearch(a[j]);
        }
       int ans=0;
       for(int j=1;j<=n;j++)
       {
           //cout<<dist[j]<<" ";
           if(dist[j]==k)
            ans++;
       }
       printf("Case %d: %d\n",i,ans);
   }
   return 0;
}

