#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int fx[8]={-1,0,1,0};
int fy[8]={0,1,0,-1};
int visit[1005][1005];
int dist[1005][1005];
int matrix[1005][1005];
int row,col;
int bfs(int a,int b)
{
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    dist[a][b]=0;
    visit[a][b]=1;
    while(!q.empty())
    {
        pii n=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int h=n.first+fx[i],k=n.second+fy[i];
            if(h>=0&&h<row&&k>=0&&k<col&&visit[h][k]==0&&matrix[h][k]==0)
            {
                visit[h][k]=1;
                dist[h][k]=dist[n.first][n.second]+1;
                q.push(make_pair(h,k));
            }
        }
    }
    return 0;
}
int main()
{
    while(1)
    {
        memset(visit,0,sizeof(visit));
        memset(dist,0,sizeof(dist));
        memset(matrix,0,sizeof(matrix));
        scanf("%d%d",&row,&col);
        if(row+col==0)
           break;
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int m,v;
            scanf("%d%d",&m,&v);
            for(int j=0;j<v;j++)
            {
                int b;
                scanf("%d",&b);
                matrix[m][b]=1;
            }
        }
        int s1,s2,d1,d2;
        scanf("%d%d%d%d",&s1,&s2,&d1,&d2);
        bfs(s1,s2);
        printf("%d\n",dist[d1][d2]);
    }
    return 0;
}
