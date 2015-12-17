#include<bits/stdc++.h>
using namespace std;
int visit[25];
int dist[25];
vector<int>node[25];
int bfs(int start)
{
    visit[start]=1;
    dist[start]=0;
    queue<int>q;
    q.push(start);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<node[p].size();i++)
        {
            if(!visit[node[p][i]])
            {
                visit[node[p][i]]=1;
                dist[node[p][i]]=dist[p]+1;
                q.push(node[p][i]);
            }
        }
    }
    return 0;
}
int main()
{
    int n,test=1;
    while(scanf("%d",&n)!=EOF)
    {
        memset(visit,0,sizeof(visit));
        memset(dist,0,sizeof(dist));
        for(int i=0;i<n;i++)
        {
            int m;
            scanf("%d",&m);
            node[1].push_back(m);
            node[m].push_back(1);
        }
        for(int i=2;i<=19;i++)
        {
            scanf("%d",&n);
            for(int j=1;j<=n;j++)
            {
                int m;
                scanf("%d",&m);
                node[i].push_back(m);
                node[m].push_back(i);
            }
        }
        scanf("%d",&n);
        printf("Test Set #%d\n",test);
        for(int i=0;i<n;i++)
        {
            memset(visit,0,sizeof(visit));
            memset(dist,0,sizeof(dist));
            int a,b;
            scanf("%d%d",&a,&b);
            bfs(a);
            printf("%2d to %2d: %d\n",a,b,dist[b]);
        }
        cout<<endl;
        for(int i=0;i<25;i++)
            node[i].clear();
        test++;
    }
    return 0;
}
