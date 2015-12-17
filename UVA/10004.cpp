#include<bits/stdc++.h>
using namespace std;
bool visit[205];
int dist[205];
vector<int>node[205];
bool bfs(int start)
{
   queue<int>q;
   q.push(start);
   visit[start]=true;
   dist[start]=1;
   while(!q.empty())
   {
       int p=q.front();
       q.pop();
       for(int i=0;i<node[p].size();i++)
       {
           if(!visit[node[p][i]])
           {
               if(dist[p]==1)
                dist[node[p][i]]=2;
               else
                dist[node[p][i]]=1;
               visit[node[p][i]]=true;
               q.push(node[p][i]);
           }
           else if(dist[p]==dist[node[p][i]])
            return false;
       }
   }
  return true;
}
int main()
{
    int n,v;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        memset(visit,false,sizeof(visit));
        memset(dist,0,sizeof(dist));
        scanf("%d",&v);
        int a,b;
        for(int i=1;i<=v;i++)
        {
            scanf("%d%d",&a,&b);
            node[a].push_back(b);
            node[b].push_back(a);
        }
        bool test=bfs(a);
        if(test)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
        for(int i=0;i<201;i++)
            node[i].clear();
    }
}
