#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define ff first
#define ss second
int main()
{
    int visit[505][505];
    int fx[]={0,-1,0,1};
    int fy[]={-1,0,1,0};
    string s[505];
    int n,m;
    cin>>n>>m;
    n--;
    m--;
    for(int i=0;i<=n;i++)
        cin>>s[i];
    int dx,dy,sx,sy;
    cin>>sx>>sy>>dx>>dy;
    sx--,sy--,dx--,dy--;
    for(int i=0;i<=n;i++)
    for(int j=0;j<=m;j++)
    visit[i][j]=0;
    queue<pii>q;
    int x,y;
    x=sx;
    y=sy;
    q.push(pii(x,y));
    visit[x][y]=1;
    while(!q.empty())
    {
      pii a=q.front();
      q.pop();
       for(int i=0;i<4;i++)
       {
          int tx=a.ff+fx[i];
          int ty=a.ss+fy[i];
          if(tx==dx&&ty==dy&&s[tx][ty]=='X')
          {
              cout<<"YES";
              return 0;
          }
          if(tx>=0&&tx<=n&&ty>=0&&ty<=m&&visit[tx][ty]==0&&s[tx][ty]=='.')
          {
             visit[tx][ty]=1;
             q.push(pii(tx,ty));
             s[tx][ty]='X';
          }
       }
    }
        cout<<"NO\n";
    return 0;
}
