#include<bits/stdc++.h>
using namespace std;
vector<int>node[100005];
bool vis[100005]={false};
int dist[100005]={0};
long int bfs(int start)
{
    queue<int>q;
    q.push(start);
    vis[start]=true;
    dist[start]=-1;
    long int cnt=0,cn=0;
    cnt++;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(long int i=0;i<node[p].size();i++)
        {
            if(!vis[node[p][i]])
            {
                if(dist[p]==-1)
                {
                    vis[node[p][i]]=true;
                    dist[node[p][i]]=1;
                    q.push(node[p][i]);
                    cn++;
                }
                else
                {
                    vis[node[p][i]]=true;
                    dist[node[p][i]]=-1;
                    q.push(node[p][i]);
                    cnt++;
                }
            }
        }
    }
    return max(cnt,cn);
}
int main()
{
    int test;
    long int n;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        memset(dist,'0',sizeof(dist));
        memset(vis,false,sizeof(vis));
        set<int>s;
        set<int>::iterator it;
        scanf("%ld",&n);
        for(long int j=0;j<n;j++)
        {
           int a,b;
           scanf("%d%d",&a,&b);
           node[a].push_back(b);
           node[b].push_back(a);
           s.insert(a);
           s.insert(b);
        }
        long int cnt=0;
        for(it=s.begin();it!=s.end();it++)
        {
            int m=*it;
            if(!vis[m])
            cnt+=bfs(m);
            node[m].clear();
        }
        printf("Case %d: %ld\n",i,cnt);
    }
    return 0;
}
