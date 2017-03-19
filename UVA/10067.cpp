/*
* Author: Jony Roy
* Date: 01-07-2016
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

int dist[11][11][11][11];
int visited[11][11][11][11];
int stn[15]= {1,2,3,4,5,6,7,8,9,0};
int stm[15]= {9,0,1,2,3,4,5,6,7,8};
struct number
{
    int a,b,c,d;
};
bool checkExist(number x)
{
    if(visited[x.a][x.b][x.c][x.d]==0)
    return true;
    return false;
}
int bfs(number xx)
{
    queue<number> q;
    dist[xx.a][xx.b][xx.c][xx.d]=0;
    visited[xx.a][xx.b][xx.c][xx.d]=1;
    q.push(xx);
    while(!q.empty())
    {
        number x;
        x=q.front();
        q.pop();
        number n1;
        int ar[10];
        ar[0]=x.a;
        ar[1]=x.b;
        ar[2]=x.c;
        ar[3]=x.d;
        for(int i=0; i<4; i++)
        {
            int cnt=ar[i];
            ar[i]=stn[cnt];
            n1.a=ar[0],n1.b=ar[1],n1.c=ar[2],n1.d=ar[3];
            if(checkExist(n1))
            {
                dist[n1.a][n1.b][n1.c][n1.d]=dist[x.a][x.b][x.c][x.d]+1;
                visited[n1.a][n1.b][n1.c][n1.d]=1;
                //cout<<n1.a<<n1.b<<n1.c<<n1.d<<endl;
                q.push(n1);
            }
            ar[i]=stm[cnt];
            n1.a=ar[0],n1.b=ar[1],n1.c=ar[2],n1.d=ar[3];
            if(checkExist(n1))
            {
                dist[n1.a][n1.b][n1.c][n1.d]=dist[x.a][x.b][x.c][x.d]+1;
                visited[n1.a][n1.b][n1.c][n1.d]=1;
                //cout<<n1.a<<n1.b<<n1.c<<n1.d<<endl;
                q.push(n1);
            }
            ar[i]=cnt;
        }
    }
    return 0;
}
int main()
{
    int tc;//Number of the Test Case
    scanf("%d",&tc);//Read Test Case From Keyboard
    while(tc--)
    {
        memset(dist,0,sizeof(dist));
        memset(visited,0,sizeof(visited));
        int sa,sb,sc,sd;
        int da,db,dc,dd;
        scanf("%d%d%d%d",&sa,&sb,&sc,&sd);
        scanf("%d%d%d%d",&da,&db,&dc,&dd);
        int forBiden;
        scanf("%d",&forBiden);
        for(int i=1; i<=forBiden; i++)
        {
            int aa,bb,cc,dd;
            scanf("%d%d%d%d",&aa,&bb,&cc,&dd);
            visited[aa][bb][cc][dd]=-1;
        }
        number x;
        x.a=sa,x.b=sb,x.c=sc,x.d=sd;
        bfs(x);
        if(visited[da][db][dc][dd]==1)
            printf("%d\n",dist[da][db][dc][dd]);
        else
            printf("-1\n");
    }
    return 0;
}
