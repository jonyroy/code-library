#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define MAX 1000500
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define pb(x)  push_back(x)
#define pob(x)  pop_back(x)
#define mp(x)  make_pair(x)
#define PI 3.141592653589793
#define mem(a,b)   memset(a,b,sizeof(a))
#define rep(i,k,n)  for(int i = k; i <= n; i++)
#define rrep(i,k,n)   for(int i=n;i>=k;i--)
typedef int  I;
typedef long  L;
typedef float  FL;
typedef double  D;
typedef long long LL;
typedef vector<int>VI;
typedef pair<int,int> pii;
typedef long double  LD;
typedef vector<long int>VL;
typedef unsigned long long ULL;
int row,column;
int dist[100][100],visit[100][100];
int fx[]={0,1,0,-1,-1,1,1,-1};
int fy[]={-1,0,1,0,-1,-1,1,1};
int px[100][100],py[100][100];
vector<pii>path;
int bfs(int x,int y)
{
    for(int i=0;i<=row;i++)
    for(int j=0;j<=column;j++)
    dist[i][j]=0,visit[i][j]=0,px[i][j]=0,py[i][j]=0;
    queue<pii>q;
    q.push(pii(x,y));
    visit[x][y]=1;
    dist[x][y]=0;
    while(!q.empty())
    {
      pii a=q.front();
      q.pop();
       for(int i=0;i<8;i++)
       {
          int tx=a.ff+fx[i];
          int ty=a.ss+fy[i];
          if(tx>=1&&tx<=row&&ty>=1&&ty<=column&&visit[tx][ty]==0)
          {
             dist[tx][ty]=dist[a.ff][a.ss]+1;
             visit[tx][ty]=1;
             //cout<<a.ff<<" "<<a.ss<<endl;
             px[tx][ty]=a.ff;
             py[tx][ty]=a.ss;
             q.push(pii(tx,ty));
          }
       }
    }
}
int Print_Path(int d,int e)
{
    if(d==0&&e==0)
    return 0;
    Print_Path(px[d][e],py[d][e]);
    //path.pb(pii(d,e))
    printf("%d  %d\n",d,e);
    return 0;
}
int main()
{
   int r,c;
   cin>>row>>column;
   int dx,dy,sx,sy;
   cin>>dx>>dy>>sx>>sy;
   bfs(dx,dy);
   cout<<dist[sx][sy]<<endl;
   //cout<<px[dx][dy]<<"   "<<py[dx][dy]<<endl;
   Print_Path(px[sx][sy],py[sx][sy]);
}
