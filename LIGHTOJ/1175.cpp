/*
* Author: Jony Roy
* Date: 29-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define pb(x)          push_back(x)
#define mp(x,y)          make_pair(x,y)
#define ft              first
#define sd              second
#define deb(x) cerr << #x << " = " << x << endl;

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
string st[205];
int dist[205][205],dis[205][205];
bool visited[205][205];
bool vis[205][205];
int bfs(int x,int y,int row,int col)
{
    queue<pint >q;
    q.push(mp(x,y));
    visited[x][y]=true;
    dist[x][y]=0;
    while(!q.empty())
    {
        pint u=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int xx=u.first+fx[i];
            int yy=u.second+fy[i];
            if(xx>=0&&xx<row && yy>=0&&yy<col&&st[xx][yy]!='#')
            {
                if(st[xx][yy]=='F')
                {
                    dist[xx][yy]=0;
                    st[xx][yy]='.';
                    q.push(mp(xx,yy));
                    visited[xx][yy]=true;
                }
                else if((dist[u.first][u.second]+1<dist[xx][yy]))
                {
                    dist[xx][yy]=dist[u.first][u.second]+1;
                    q.push(mp(xx,yy));
                    visited[xx][yy]=true;
                }
            }
        }
    }
}

int bfs1(int x,int y,int row,int col)
{

    queue<pint > q;
    q.push(mp(x,y));
    vis[x][y]=true;
    dis[x][y]=0;
    while(!q.empty())
    {
        pint u=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int xx=u.first+fx[i];
            int yy=u.second+fy[i];
            if(xx >=0 && xx<row && yy>=0&&yy<col&&st[xx][yy]!='#'&&vis[xx][yy]==false)
            {
                dis[xx][yy]=dis[u.first][u.second]+1;
                if((xx==row-1||yy==col-1||xx==0||yy==0)&&(dis[xx][yy]<dist[xx][yy]))
                    return dis[xx][yy];
                q.push(mp(xx,yy));
                vis[xx][yy]=true;
            }
        }
    }
    return -1;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i=1; i<=tc; i++)
    {
        vector<pint >a;
        int dis[205][205];
        for(int j=0; j<=200; j++)
        {
            for(int k=0; k<=200; k++)
            {
                dist[j][k]=100000000;
                dis[j][k]=0;
                visited[j][k]=false;
                vis[j][k]=false;
            }
            st[j].clear();
        }
        int row,col,jx,jy,Fx,Fy;
        scanf("%d%d",&row,&col);
        for(int j=0; j<row; j++)
        {
            cin>>st[j];
            for(int k=0; k<col; k++)
            {
                if(st[j][k]=='F')
                    a.pb(mp(j,k));
                if(st[j][k]=='J')
                    jx=j,jy=k;
            }
        }
        for(int j=0; j<a.size(); j++)
        {
            int x=a[j].first;
            int y=a[j].second;
            if(visited[x][y]==false)
            {
                bfs(x,y,row,col);
            }
        }
        int ans=bfs1(jx,jy,row,col);
         if(ans>=0)
         {
             printf("Case %d: %d\n",i,ans+1);
         }
         else
             printf("Case %d: IMPOSSIBLE\n",i);
    }
}

