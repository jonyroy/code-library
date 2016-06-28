/*
* Author: Jony Roy
* Date: 26-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

int fx[]={0,-1,0,1};
int fy[]={-1,0,1,0};

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}
string st[25];
int visited[25][25]={0};
int dist[25][25]={0};

int bfs(int x,int y,int n,int m)
{
    queue<pint > Q;
    for(int i=0;i<21;i++)
        for(int j=0;j<21;j++)
        visited[i][j]=0,dist[i][j]=0;
    Q.push(make_pair(x,y));
    dist[x][y]=0;
    visited[x][y]=0;
    while(!Q.empty())
    {
        pint p=Q.front();
        Q.pop();
        for(int i=0;i<4;i++)
        {
            int xx=p.first+fx[i];
            int yy=p.second+fy[i];
            if(xx>=0 &&xx<=n && yy>=0 && yy<=m && visited[xx][yy]==0 && st[xx][yy]!='#' && st[xx][yy]!='m')
            {
                visited[xx][yy]=1;
                dist[xx][yy]=dist[p.first][p.second]+1;
                Q.push(make_pair(xx,yy));
            }
        }
    }

}

int main(int argc, char *argv[])
{

    int tc;
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        int n,m;
        for(int j=0;j<21;j++)
            st[j].clear();
        scanf("%d%d",&n,&m);
        for(int j=0;j<n;j++)
            cin>>st[j];
        int ax,ay,bx,by,cx,cy,hx,hy;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(st[j][k]=='a')
                    ax=j,ay=k;
                if(st[j][k]=='h')
                    hx=j,hy=k;
                if(st[j][k]=='b')
                    bx=j,by=k;
                if(st[j][k]=='c')
                    cx=j,cy=k;
            }
        }
        int ans=0;
        bfs(hx,hy,n-1,m-1);
        ans=max(ans,dist[ax][ay]);
        //bfs(bx,by,n-1,m-1);
        ans=max(ans,dist[bx][by]);
        //bfs(cx,cy,n-1,m-1);
        ans=max(ans,dist[cx][cy]);
        printf("Case %d: %d\n",i,ans);
    }
   return 0;
}

