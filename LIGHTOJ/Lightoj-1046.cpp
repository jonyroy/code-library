/*
* Author: Jony Roy
* Date: 05-07-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define pb(x)           push_back(x)
#define mp(x,y)         make_pair(x,y)
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

int dist[12][12];
int dd[15][15];
int fx[]= { -2, -2, -1, 1, 2, 2, 1, -1 };
int fy[]= { -1, 1, 2, 2, 1, -1, -2, -2 };
int bfs(int x,int y,int k,int n,int m)
{
    int vis[12][12]= {0};
    int d[15][15]= {0};
    queue<pint> q;
    q.push(mp(x,y));
    vis[x][y]=1;
    dist[x][y]++;
    while(!q.empty())
    {
        pint u=q.front();
        q.pop();
        for(int i=0; i<=7; i++)
        {
            int xx=u.first+fx[i];
            int yy=u.second+fy[i];
            if(vis[xx][yy]==0&&xx>=0&&xx<n&&yy>=0&&yy<m)
            {
                vis[xx][yy]=1;
                dist[xx][yy]++;
                d[xx][yy]=d[u.first][u.second]+1;
                q.push(mp(xx,yy));
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            dd[i][j]+=(int)ceil((double)d[i][j]/(double)k);
        }
    }
}
int main()
{
   
    int tc;
    scanf("%d",&tc);
    for(int i=1; i<=tc; i++)
    {
        for(int j=0; j<=10; j++)
        {
            for(int k=0; k<=10; k++)
            {
                dd[j][k]=0;
                dist[j][k]=0;
            }
        }
        int n,m;
        vector<pint> a;
        string st[12];
        scanf("%d%d",&n,&m);
        for(int j=0; j<n; j++)
        {
            cin>>st[j];
            for(int k=0; k<m; k++)
            {
                if(st[j][k]>='1' && st[j][k]<='9')
                    a.pb(mp(j,k));
            }
        }
        int ans=a.size();
        for(int j=0; j<ans; j++)
        {
            int x,y;
            x=a[j].first;
            y=a[j].second;
            bfs(x,y,st[x][y]-48,n,m);
        }
        int mm=100000;
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
               if(dist[j][k]==ans)
                mm=min(mm,dd[j][k]);
            }
        }
        if(mm==100000)
            printf("Case %d: -1\n",i);
        else
            printf("Case %d: %d\n",i,mm);
    }
    return 0;
}
