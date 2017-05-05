/*
* Author: Jony Roy
* Date: 27-06-2016
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

int visited[505][505];
string st[505];
int dist[505][505];
int edge_id[505][505];
int dfs(int x,int y,int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            visited[i][j]=0;
            edge_id[i][j]=0;
        }
    }
    stack<pint> S;
    S.push(make_pair(x,y));
    visited[x][y]=1;
    int cnt=0;
    while(!S.empty())
    {
        pint u=S.top();
        S.pop();
        while(edge_id[u.first][u.second]<4)
        {
            int xx=u.first+fx[edge_id[u.first][u.second]];
            int yy=u.second+fy[edge_id[u.first][u.second]];
            edge_id[u.first][u.second]++;
            if(xx>=0 && xx<n && yy>=0 && yy<m && visited[xx][yy] == 0 && st[xx][yy]!='#')
            {
                if(st[xx][yy]=='C')
                    cnt++;
                S.push(make_pair(u.first,u.second));
                S.push(make_pair(xx,yy));
                visited[xx][yy]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
         if(visited[i][j])
         dist[i][j]=cnt;
    return cnt;
}

int main(int argc, char *argv[])
{
   int tc;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       int n,m,q;
       scanf("%d%d%d",&n,&m,&q);
       for(int j=0;j<=n;j++)
        for(int k=0;k<=m;k++)
          dist[j][k]=-1;
       for(int j=0;j<n;j++)
        cin>>st[j];
        printf("Case %d:\n",i);
       for(int j=1;j<=q;j++)
       {
           int x,y;
           scanf("%d%d",&x,&y);
           if(dist[x-1][y-1]>=0)
           {
               printf("%d\n",dist[x-1][y-1]);
           }
           else
            {
               int cnt=dfs(x-1,y-1,n,m);
                printf("%d\n",cnt);
            }
       }
   }
   return 0;
}

