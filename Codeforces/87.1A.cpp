#include<bits/stdc++.h>
using namespace std;
int vis[2005],n,dist[2005];
vector<int>G[2005];
int m=0;
void dfs(int u)
{
    vis[u]=1;
    for(int i=0;i<G[u].size();i++)
    {
        int a=G[u][i];
        if(vis[a]==0)
        {
            dist[a]=dist[u]+1;
            m=max(m,dist[a]);
            dfs(a);
        }
    }
}
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<G[p].size();i++)
        {
           int h=G[p][i];
           if(vis[h]==0)
           {
               dist[h]=dist[p]+1;
               m=max(m,dist[h]);
               q.push(h);
           }
        }
    }
}
int main()
{
    int cn[2005];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int b;
        cin>>b;
        cn[i]=b;
        if(b>0)
        G[b].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(cn[i]<0&&vis[i]==0)
            bfs(i);
    }
    cout<<m+1<<endl;
}
