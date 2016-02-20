#include<bits/stdc++.h>
using namespace std;
queue<int> q;
vector<int>G[1000];
int n,color[1000],d[1000],path[1000];
void BFS(int s)
{
    int i,v,l,u;
    for(i=0;i<=n;i++)
    {
        color[i]=0;
        d[i]=-1;
        path[i]=0;
    }
    color[s]=1;
    d[s]=0;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        l=G[u].size();
        for(i=0;i<l;i++)
        {
            v=G[u][i];
            if(color[v]==0)
            {
                color[v]=1;//color gray..
                d[v]=d[u]+1;//distance..
                path[v]=u;//u parents of v...
                q.push(v);
            }
        }
        color[u]=2;//color black..
    }
}
void path_print(int v)
{
    if(v<=0)
    return;
    path_print(path[v]);
    printf("%d ",v);
}
int main(){
    int a,i,x,y,s,e;
    n=1000;
cin>>a;
for(i=0;i<a;i++)
{
    cin>>x>>y;
    G[x].push_back(y);
    G[y].push_back(x);
}
cin>>s>>e;
BFS(s);
cout<<"Distance: "<<d[e]+1<<endl;
path_print(e);
cout<<endl;
return 0;
}
