#include<bits/stdc++.h>
using namespace std;

vector<int>G[1000];
int n,color[1000],d[1000],f[1000],path[1000],time_;
void DFS_Visit(int u)
{
    int i,v,l;
    time_++;
    d[u]=time_;
    color[u]=1;
    l=G[u].size();
    for(i=0;i<l;i++)
    {
        v=G[u][i];
        if(color[v]==0)
        {
            path[v]=u;//u parents of v...
            DFS_Visit(v);
        }
    }
    time_++;
    f[u]=time_;
}
void DFS()
{
    int i;
    for(i=0;i<=n;i++)
    {
        color[i]=0;
        path[i]=0;
    }
    time_=0;
    for(i=1;i<=n;i++)
    if(color[i]==0)
    DFS_Visit(i);
}

void path_print(int v)
{
    if(v<=0)
    return;
    path_print(path[v]);
    printf("%d ",v);
}
int main(){
    int a,i,x,y;
    n=1000;
cin>>a;
for(i=0;i<a;i++)
{
    cin>>x>>y;
    G[x].push_back(y);
}
DFS();
return 0;
}
