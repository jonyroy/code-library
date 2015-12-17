#include<bits/stdc++.h>
using namespace std;
#define M 1000
int parent[M],color[M],dist[M];
vector<int>GVE[M];
queue<int>q;
int bfs(int s)
{
    for(int i=0;i<M;i++)
    parent[i]=0,color[i]=0,dist[i]=0;
    q.push(s);
    color[s]=1;
    dist[s]=1;
    while(!q.empty())
    {
       int u=q.front();
       q.pop();
       int len=GVE[u].size();
       for(int i=0;i<len;i++)
       {
           int v=GVE[u][i];
           if(color[v]==0)
           {
               color[v]=1;
               dist[v]=dist[u]+1;
               parent[v]=u;
               q.push(v);
           }
       }
       color[u]=2;
    }
    return 0;
}
int Print_Path(int d)
{
    if(d<=0)
        return 0;
    Print_Path(parent[d]);
    printf("%d ",d);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        GVE[a].push_back(b);
        GVE[b].push_back(a);
    }
    int s,d;
    while(scanf("%d%d",&s,&d)!=EOF)
    {
        bfs(s);
        cout<<dist[d]<<endl;
        Print_Path(d);
        printf("\n");
    }
    return 0;
}
