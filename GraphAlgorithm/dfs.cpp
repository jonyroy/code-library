#include<bits/stdc++.h>
using namespace std;
int color[1000],parent[1000],d[1000],f[1000],t,n=1000;
vector<int>G[1000];
void dfs_visit(int u)
{
    color[u]=1;
    t++;
    d[u]=t;
    int l=G[u].size();
    for(int i=0;i<l;i++)
    {
        int v=G[u][i];
        if(color[v]==0)
        {
            parent[v]=u;
            dfs_visit(v);
        }
    }
    f[u]=++t;
}
void dfs()
{
    for(int i=1;i<=n;i++)
    {
        if(color[i]==0)
        dfs_visit(i);
    }
}
void Print_Path(int p)
{
    if(p<=0)
        return ;
    Print_Path(parent[p]);
    printf("%d ",p);
}
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        G[x].push_back(y);
    }
    dfs();
    printf("Enter Value:");
    int h;
    cin>>h;
    Print_Path(h);
    return 0;
}
