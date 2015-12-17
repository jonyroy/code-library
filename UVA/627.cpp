#include<bits/stdc++.h>
using namespace std;
int visit[305];
int dist[305];
int parent[305];
vector<int>node[305];
int bfs(int start)
{
    visit[start]=1;
    dist[start]=0;
    parent[start]=start;
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
                parent[node[p][i]]=p;
            }
        }
    }
    return 0;
}
int PrintPath(int start)
{
    if(start==parent[start])
        {
            printf("%d",start);
            return 0;
        }
    PrintPath(parent[start]);
    printf(" %d",start);
}
int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        memset(visit,0,sizeof(visit));
        memset(dist,0,sizeof(dist));
        memset(parent,0,sizeof(parent));
        for(int i=0;i<n;i++)
        {
            vector<int>a;
            string str,s;
            cin>>str;
            for(int j=0;j<=str.size();j++)
            {
               if(str[j]=='-'||str[j]==','||j==str.size())
                {
                   if(s.size()>=1)
                    {
                       a.push_back(atoi(s.c_str()));
                       s.clear();
                    }
                }
                else
                s+=str[j];
             }
             for(int j=1;j<a.size();j++)
                node[a[0]].push_back(a[j]);
        }
        printf("-----\n");
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            memset(visit,0,sizeof(visit));
            memset(dist,0,sizeof(dist));
            memset(parent,0,sizeof(parent));
            int a,b;
            scanf("%d%d",&a,&b);
            bfs(a);
            if(dist[b])
            {
                PrintPath(b);
            }
            else
                printf("connection impossible");
                cout<<endl;
        }
        for(int i=0;i<300;i++)
            node[i].clear();
    }
    return 0;
}
