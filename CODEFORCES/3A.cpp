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
int dist[15][15],visit[15][15];
int fx[]={0,1,0,-1,-1,1,1,-1};
int fy[]={-1,0,1,0,-1,-1,1,1};
int px[15][15],py[15][15];
vector<pii>path;
int bfs(int x,int y)
{
    for(int i=0;i<=10;i++)
    for(int j=0;j<=10;j++)
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
          if(tx>=1&&tx<=8&&ty>=1&&ty<=8&&visit[tx][ty]==0)
          {
             dist[tx][ty]=dist[a.ff][a.ss]+1;
             visit[tx][ty]=1;
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
    path.pb(pii(d,e));
    return 0;
}
int main()
{
   string s,str;
   int dx,dy,sx,sy;
   cin>>s>>str;
   dx=9-(s[1]-48);
   dy=s[0]-96;
   sx=9-(str[1]-48);
   sy=str[0]-96;
   bfs(dx,dy);
   Print_Path(px[sx][sy],py[sx][sy]);
   cout<<dist[sx][sy]<<endl;
   path.pb(pii(sx,sy));
   for(int i=0;i<path.size()-1;i++)
   {
      int a=path[i].ff,b=path[i].ss,c=path[i+1].ff,d=path[i+1].ss;
       if(a-1==c&&b-1==d)
       cout<<"LU\n";
       if(a==c&&b-1==d)
       cout<<"L\n";
       if(a+1==c&&b-1==d)
       cout<<"LD\n";
       if(a+1==c&&b==d)
       cout<<"D\n";
       if(a+1==c&&b+1==d)
       cout<<"RD\n";
       if(a==c&&b+1==d)
       cout<<"R\n";
       if(a-1==c&&b+1==d)
       cout<<"RU\n";
       if(a-1==c&&b==d)
       cout<<"U\n";
   }
}

