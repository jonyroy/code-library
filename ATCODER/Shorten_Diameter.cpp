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
vector<int > G[2005];
int bfs(int n)
{
    int visited[2005]={0};
    int dist[2005]={0};
    queue<int> q;
    q.push(n);
    visited[n]=1;
    dist[n]=0;
    int m=-1,ans;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                dist[v]=dist[u]+1;
                if(m<=dist[v])
                {
                    m=dist[v];
                    ans=v;
                }
                q.push(v);
            }
        }
    }
    return ans;
}
int bfs1(int n,int k,int node)
{
    int visited[2005]={0};
    int dist[2005]={0};
    queue<int> q;
    q.push(n);
    visited[n]=1;
    dist[n]=0;
    int m=-1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                dist[v]=dist[u]+1;
               /* if(m<=dist[v])
                {
                    m=dist[v];
                    cnt=v;
                }*/
                q.push(v);
            }
        }
    }
    int p=0;
    for(int i=1;i<=node;i++)
    if(dist[i]<=k)
    p++;
    return p;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        G[u].pb(v);
        G[v].pb(u);
    }
    /*int ans=bfs(1);
    //cout<<ans<<endl;
    int cnt,pnt;
    int m=bfs1(ans,k,n,cnt);
    //cout<<m<<" "<<cnt<<endl;
    int knt=bfs1(cnt,k,n,pnt);*/
    int ans=2000000;
    for(int i=1;i<=n;i++)
    {
        int cnt=bfs1(i,k,n);
        ans=min(ans,n-cnt);
    }
    cout<<ans<<endl;
}
