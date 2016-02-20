#include<bits/stdc++.h>
using namespace std;
#define mx 100002
vector <int>g[mx],cost[mx];
int d[mx],par[mx];
typedef pair<int,int>  PII;
int dijkstra(int n)
{
    for(int i=2; i<=n; i++)
        d[i]=1000000000;
    memset(par,0,sizeof(par));
    priority_queue <PII,vector<PII>,greater<PII> >q;
    q.push(PII(1,0));
    d[1]=0;
    while(!q.empty())
    {
        PII top=q.top();
        q.pop();
        int u=top.first;
        if(u==n)
        return d[n];
        for(int i=0; i<(int)g[u].size(); i++)
        {
            int v=g[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                par[v]=u;
                q.push(PII(v,d[v]));
            }
        }
    }
    return -1;
}
int print_path(int n)
{
    if(n==0)
        return 0;
    print_path(par[n]);
    cout<<n<<" ";
}
int main()
{
    int n,e;
    //freopen("in","r",stdin);
    //freopen("ou","w",stdout);
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        int w;
        cin>>u>>v>>w;
        if(u==v)
            continue;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);

    }
    int ret=dijkstra(n);
    if(ret==-1)
        cout<<"-1";
    else
        print_path(n);
}
