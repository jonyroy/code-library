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
struct node
{
    int letter;
    int letterX;
    int letterY;
};

bool compare(const node a,const node b)
{
    if(a.letter < b.letter)
        return true;
    else
        return false;
}
string st[15];
int visited[15][15],dist[15][15];
int bfs(int sx,int sy,int dx,int dy,int n)
{

    queue<pint > Q;
    for(int i=0;i<=11;i++)
        for(int j=0;j<=11;j++)
        visited[i][j]=dist[i][j]=0;
    Q.push(make_pair(sx,sy));
    visited[sx][sy]=1;
    dist[sx][sy]=0;
    st[sx][sy]='.';
    while(!Q.empty())
    {
        pint u=Q.front();
        Q.pop();
        for(int i=0;i<4;i++)
        {
            int xx=u.first+fx[i];
            int yy=u.second+fy[i];
            if(xx>=0 && xx<n &&yy>=0&& yy<n && st[xx][yy]!='#' && ((st[xx][yy]=='.') || (xx==dx &&yy==dy)) && visited[xx][yy]==0)
            {
                visited[xx][yy]=1;
                Q.push(make_pair(xx,yy));
                dist[xx][yy]=dist[u.first][u.second]+1;
                st[xx][yy]='.';
                if(xx==dx&&yy==dy)
                return dist[xx][yy];
            }
        }
    }
   return -1;
}

int main(int argc, char *argv[])
{

   int tc;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       vector <node> pq;
       for(int j=0;j<=10;j++)
        st[j].clear();
       int n;
       scanf("%d",&n);
       for(int j=0;j<n;j++)
        {
           cin>>st[j];
           for(int k=0;k<n;k++)
           {
                 if(st[j][k]>='A' && st[j][k]<='Z')
                 {
                     node ln;
                     ln.letter=st[j][k];
                     ln.letterX=j;
                     ln.letterY=k;
                     pq.push_back(ln);
                 }
           }
        }
        sort(pq.begin(),pq.end(),compare);
        int ans=0;
        bool flag=true;
        for(int j=1;j<pq.size();j++)
        {
            int cnt=bfs(pq[j-1].letterX,pq[j-1].letterY,pq[j].letterX,pq[j].letterY,n);
            //printf("%c %c ",pq[j-1].letter,pq[j].letter);
            //cout<<pq[j-1].letterX<<" "<<pq[j-1].letterY<<" = ";
            //cout<<pq[j].letterX<<" "<<pq[j].letterY<<endl;
            if(cnt<0)
            {
                printf("Case %d: Impossible\n",i);
                flag=false;
                break;
            }
            else
                ans+=cnt;

        }
        if(flag)
            printf("Case %d: %d\n",i,ans);
   }
   return 0;
}

