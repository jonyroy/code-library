#include<bits/stdc++.h>
using namespace std;
bool visit[30005];
long int dist[30005];
vector<int>node[30005],weight[30005];
struct jony
{
    long int m,ma;
};
jony bfs(int start)
{
    visit[start]=true;
    dist[start]=0;
    queue<int>q;
    jony h;
    h.ma=0;
    q.push(start);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<node[p].size();i++)
        {
            if(!visit[node[p][i]])
            {
                q.push(node[p][i]);
                visit[node[p][i]]=true;
                dist[node[p][i]]=dist[p]+weight[p][i];
                if(h.ma<dist[node[p][i]])
                {
                    h.ma=dist[node[p][i]];
                    h.m=node[p][i];
                }
            }
        }
    }
    return h;
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        memset(visit,false,sizeof(visit));
        memset(dist,0,sizeof(dist));
        int n;
        scanf("%d",&n);
        for(int j=1;j<n;j++)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            node[u].push_back(v);
            node[v].push_back(u);
            weight[u].push_back(w);
            weight[v].push_back(w);
        }
        jony ja=bfs(0);
        memset(visit,false,sizeof(visit));
        memset(dist,0,sizeof(dist));
        jony ba=bfs(ja.m);
        for(int j=0;j<30002;j++)
        {
            node[j].clear();
            weight[j].clear();
        }
        printf("Case %d: %ld\n",i,ba.ma);
    }
    return 0;
}
