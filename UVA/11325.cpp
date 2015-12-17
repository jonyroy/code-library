#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define pb make_pair
int visit[105][105];
int block[105][105];
int fx[10]={-2,-1,1,2,2,1,-1,-2};
int fy[10]={-1,-2,-2,-1,1,2,2,1};
int fx1[10]={-1,-1,-1,0,1,1,1,0};
int fy1[10]={-1,0,1,1,1,0,-1,-1};
int dist[105][105];
string s[105];
int row,col;
int bfs(int a,int b)
{
    queue<pii>q;
    q.push(pb(a,b));
    dist[a][b]=0;
    visit[a][b]=1;
    while(!q.empty())
    {
        pii p=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int n,m;
            n=p.first+fx1[i],m=p.second+fy1[i];
            if(n>=0&&n<row&&m>=0&&m<col&&visit[n][m]==0&&block[n][m]==0)
            {
                q.push(pii(n,m));
                dist[n][m]=dist[p.first][p.second]+1;
                visit[n][m]=1;
            }
        }
    }
    return 0;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        memset(visit,0,sizeof(visit));
        memset(block,0,sizeof(block));
        memset(dist,0,sizeof(dist));
        scanf("%d%d",&row,&col);
        int a,b,c,d;
        for(int i=0;i<row;i++)
        {
            cin>>s[i];
            for(int j=0;j<col;j++)
            {
                if(s[i][j]=='A')
                    a=i,b=j;
                if(s[i][j]=='B')
                    c=i,d=j;
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                 if(s[i][j]=='Z')
                  {
                    block[i][j]=1;
                    for(int k=0;k<8;k++)
                    {
                        int n,m;
                        n=i+fx[k],m=j+fy[k];
                        if(n>=0&&n<row&&m>=0&&m<col&&s[n][m]!='A'&&s[n][m]!='B')
                            block[n][m]=1;
                    }
                  }
            }
        }
        bfs(a,b);
        if(dist[c][d])
            printf("Minimal possible length of a trip is %d\n",dist[c][d]);
        else
            printf("King Peter, you can't go now!\n");
        for(int i=0;i<102;i++)
            s[i].clear();
    }
}
