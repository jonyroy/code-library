#include<bits/stdc++.h>
using namespace std;
int fx[]={-1,0,1,0};
int fy[]={0,1,0,-1};
int n,m;
string str[55];
int visited[55][55];
bool cycle=false;
int dfs(int dx,int dy,int sx,int sy,char color)
{
    if(dx<0||dx>=n||dy<0||dy>=m)
        return 0;
    if(str[dx][dy]!=color)
        return 0;
    if(visited[dx][dy])
    {
        cycle=true;
        return 0;
    }
    visited[dx][dy]=1;
    for(int i=0;i<4;i++)
    {
       int nx,ny;
       nx=dx+fx[i];
       ny=dy+fy[i];
       if(sx==nx&&sy==ny)
        continue;
       dfs(nx,ny,dx,dy,str[dx][dy]);
    }
  return 0;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>str[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]==0)
            {
                dfs(i,j,-100,-100,str[i][j]);
            }
        }
    }
    if(cycle)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
