#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define pb make_pair
int dist[25][25],vis[25][25];
int fx[10]={-1,0,1,0};
int fy[10]={0,-1,0,1};
char str[25][25];
int h,w;
int bfs(int a,int b)
{
    queue<pii>q;
    q.push(pb(a,b));
    dist[a][b]=1;
    vis[a][b]=1;
    while(!q.empty())
    {
        pii p=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int b,v;
            b=p.first+fx[i];
            v=p.second+fy[i];
            if(b>=0&&b<h&&v>=0&&v<w&&vis[b][v]==0&&str[b][v]!='#')
            {
                vis[b][v]=1;
                dist[b][v]=1;
                q.push(pb(b,v));
            }
        }
    }
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        for(int j=0;j<=h;j++)
        for(int k=0;k<=w;k++)
        {
            vis[j][k]=0;
            dist[j][k]=0;
        }
        scanf("%d%d",&w,&h);
        for(int j=0;j<h;j++)
        scanf("%s",str[j]);
        int a,b,t=0;
        for(int j=0;j<h;j++)
        {
           for(int k=0;k<w;k++)
            {
                if(str[j][k]=='@')
                {
                    a=j,b=k;
                    t=1;
                    break;
                }
            }
            if(t)
                break;
        }
        bfs(a,b);
        int cnt=0;
        for(int j=0;j<h;j++)
        {
            for(int k=0;k<w;k++)
            {
                if(dist[j][k])
                    cnt++;
            }
        }
        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}
