#include<bits/stdc++.h>
using namespace std;
vector<int>G[105],C[105];
int visited[105],cn;
int dfs(int u,int color)
{
    if(visited[u])
        return 0;
      visited[u]=1;
      for(int i=0;i<G[u].size();i++)
      {
          int n=G[u][i];
          if(C[u][i]==color)
          dfs(n,color);
      }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        G[a].push_back(b);
        G[b].push_back(a);
        C[a].push_back(c);
        C[b].push_back(c);
    }
    int cnt;
    cin>>cnt;
    for(int i=0;i<cnt;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=1;j<=m;j++)
        {
            for(int k=0;k<102;k++)
            visited[k]=0;
            dfs(a,j);
            if(visited[b])
                cn++;
        }
        cout<<cn<<endl;
        cn=0;
    }
    return 0;
}
