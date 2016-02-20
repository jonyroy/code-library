#include<bits/stdc++.h>
using namespace std;
int visited[20005];
vector<int>G[20005];
int depthFirstSearch(int v)
{
    int n=G[v].size();
    visited[v]=1;
    for(int i=0;i<n;i++)
    {
        int m=G[v][i];
        if(visited[m]==0)
        {
          depthFirstSearch(m);
        }
        if(visited[m]==2)
        return 1;
    }
    visited[v]=2;
    return 0;
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=0;i<20004;i++)
        visited[i]=0;
        for(int i=0;i<=10000;i++)
        G[i].clear();
        for(int i=1;i<=m;i++)
        {
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        int t=0;
        for(int i=1;i<=n;i++)
        {
            if(visited[i]==0)
            t=depthFirstSearch(i);
        }
        if(t)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
