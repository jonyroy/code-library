#include<bits/stdc++.h>
using namespace std;
#define pb make_pair
int fx[10]={-2,-1,1,2,2,1,-1,-2};
int fy[10]={-1,-2,-2,-1,1,2,2,1};
int vis[15][15],dist[15][15];
typedef pair<int,int>pii;
int bfs(int a,int b)
{
    queue<pair<int,int> >q;
    q.push(pb(a,b));
    vis[a][b]=1;
    dist[a][b]=0;
    while(!q.empty())
    {
        pii p=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int h,g;
            h=p.first+fx[i];
            g=p.second+fy[i];
            if(h>=1&&h<=8&&g>=1&&g<=8&&vis[h][g]==0)
            {
                vis[h][g]=1;
                dist[h][g]=dist[p.first][p.second]+1;
                q.push(pb(h,g));
            }
        }
    }
}
int main()
{
    char a[5],b[5];
    int n,m,p,v;
    while(cin>>a>>b)
    {
        n=a[0]-96;
        m=a[1]-48;
        p=b[0]-96;
        v=b[1]-48;
        for(int i=0;i<=10;i++)
            for(int j=0;j<=10;j++)
              {
                vis[i][j]=0;
                dist[i][j]=0;
              }
      bfs(n,m);
      printf("To get from %s to %s takes %d knight moves.\n",a,b,dist[p][v]);
    }
}
