#include<bits/stdc++.h>
using namespace std;
bool visit[100000];
long int dist[100000];
vector<long int>node[100000];
int bfs(long int start)
{
    queue<long int>q;
    q.push(start);
    visit[start]=true;
    dist[start]=0;
    while(!q.empty())
    {
        long int p=q.front();
        q.pop();
        for(long int i=0;i<node[p].size();i++)
        {
            if(!visit[node[p][i]])
            {
                visit[node[p][i]]=true;
                dist[node[p][i]]=dist[p]+1;
                q.push(node[p][i]);
            }
        }
    }
    return 0;
}
int main()
{
    long int n,t=1;
    while(1)
    {
      scanf("%ld",&n);
      if(n==0)
      break;
      int d[100000]={0};
      for(long int i=1;i<=n;i++)
      {
          long int a,b;
          scanf("%ld%ld",&a,&b);
          node[a].push_back(b);
          node[b].push_back(a);
          d[a]=1,d[b]=1;
      }
      while(1)
      {
          memset(visit,false,sizeof(visit));
          memset(dist,0,sizeof(dist));
          long int a,b;
          scanf("%ld%ld",&a,&b);
          if(a==0&&b==0)
          {
              break;
          }
          bfs(a);
          long int cnt=0;
          for(long int i=0;i<100000;i++)
          {
            if(dist[i]>b||(d[i]==1&&dist[i]==0))
            cnt++;
          }
         printf("Case %ld: %ld nodes not reachable from node %ld with TTL = %ld.\n",t,--cnt,a,b);
         t++;
      }
      for(long int i=0;i<100000;i++)
        {
          node[i].clear();
        }
    }
}
